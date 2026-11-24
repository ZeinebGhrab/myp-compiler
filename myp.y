%{

#include "Table_des_symboles.h"

#include <stdio.h>
#include <stdlib.h>
  
extern int yylex();
extern int yyparse();

void yyerror (char* s) {
  printf ("Erreur: %s\n",s);
  exit(0);
  }
		
 int depth=0; // block depth
 

  char * start_main=  
"int main() {\n\
/* Starting (main) program target PCode */\n";
    
  char * end_main=  
"\n\
/* Stoping (main) program target PCode */\n\
return stack[sp-1].int_value;\n\
}\n";  



 
%}

%union { 
  struct ATTRIBUTE * symbol_value;
  char * string_value;
  int int_value;
  float float_value;
  int type_value;
  int label_value;
  int offset_value;
}

%token <int_value> NUM
%token <float_value> DEC

%token PRG FUN VAR BIN BOUT AFF CLN DOT

%token INT FLOAT VOID

%token <string_value> ID
%token PO PF PV VIR
%token <label_value> IF ELSE WHILE

%token <label_value> AND OR NOT DIFF EQUAL SUP INF
%token PLUS MOINS STAR DIV
%token ARR

%nonassoc IFX
%left OR                       // higher priority on ||
%left AND                      // higher priority on &&
%left DIFF EQUAL SUP INF       // higher priority on comparison
%left PLUS MOINS               // higher priority on + - 
%left STAR DIV                 // higher priority on * /
%left DOT ARR                  // higher priority on . and -> 
%nonassoc UNA                  // highest priority on unary operator
%nonassoc ELSE


%{
char * type2string (int c) {
  switch (c)
    {
    case INT:
      return("int");
    case FLOAT:
      return("float");
    case VOID:
      return("void");
    default:
      return("type error");
    }  
};

  
%}

%{


// Fonction pour la Gestion/vérification/conversions de types

int binop(int $1, int $3, char* opI, char* opF){

  // Vérification des types 
  if(($1 != INT && $1 != FLOAT) || ($3 != INT && $3 != FLOAT)){
    yyerror("Types inconnu");
  }

  // cas 1 : les deux opérandes sont des entiers 
  if($1 == INT && $3 == INT) {
    printf("%s\n",opI);
    return INT;

  }
  // cas 2 : les deux opérandes sont des réels    
  else if($1 == FLOAT && $3 == FLOAT) {
    printf("%s\n",opF);
    return FLOAT;
  }
  // cas 3 : les deux opérandes sont de types différents  
  else if ($1 == INT && $3 == FLOAT){
    printf("I2F1\n");
    printf("%s\n",opF);
    return FLOAT;
  } else {
    printf("I2F2\n");
    printf("%s\n",opF);
    return FLOAT;
  }
}
%}

// Compteur offset de variables globales,

%{

  int global_offset = 0;

%}

%start prog  

// liste de tous les non terminaux dont vous voulez manipuler l'attribut
%type <type_value> type exp  typename
%type <string_value> fun_head

 /* Attention, la rêgle de calcul par défaut $$=$1 
    peut créer des demandes/erreurs de type d'attribut */

%%

 // I. Programme (top level)

prog : prog_head prog_body;

prog_head : PRG ID PV
;

prog_body : opt_funs
            {printf("%s\n",start_main);}
            opt_vars
	    BIN inst_list BOUT DOT
	    {printf("%s\n",end_main);}
            
;


// II. Declarations de variables

opt_vars : var decl_list
|
;

var: VAR // ici on entre dans des declarations de variables
;

decl_list : decl_list decl   {} 
| decl                       {}
;

decl : ID CLN type PV {
    attribute a;

    a = make_symbol_attribute($3, global_offset, 0);
  

    set_symbol_attribute($1, a);

    if ($3 == INT) {
        printf("LOADI(0)\n");
    }
    else if ($3 == FLOAT) {
        printf("LOADF(0.0)\n");
    }
    global_offset ++;
};

type
: typename                     {$$ = $1;}
;

typename
: INT                          {$$=INT;}
| FLOAT                        {$$=FLOAT;}
| VOID                         {$$=VOID;}
;


// III. Déclarations de functions

opt_funs : opt_funs function
| {printf("/* (Optionnal) functions' target PCode */\n\n");}
;

function : fun_head fun_body {}
;

fun_head : fun fun_name opt_arg CLN type {}
;

fun:FUN

fun_name : ID
;

opt_arg : PO arg_list PF
| ;

arg_list : arg vir arg_list
	   // récursion droite pour numéroter les paramètres du dernier au premier
| arg

arg : ID CLN type              {}
;

vir : VIR                      {}
;

fun_body : opt_vars BIN inst_list BOUT PV    {}
;

// IV. Instructions


inst_list: inst_list inst PV   {} 
| inst PV                      {}
;

     // chaque instruction se termine par ";" contrairement au langage C

inst:
opt_vars block_begin inst_list block_end   {}
| aff                         {}
| ret                         {}
| cond                        {}
| loop                        {}
;

// Entrée et sortie explicite d'un bloc

block_begin : BIN
;
// entrée dans un sous-bloc

block_end : BOUT
;
// sortie d'un sous-bloc


// IV.1 Affectations

aff : ID AFF exp {
    attribute a = get_symbol_attribute($1);

    // Affectation float -> int interdite
    if (a->type == INT && $3 == FLOAT) {
        yyerror("Impossible d'affecter un float à un int");
    }

    // Conversion int -> float autorisée
    if (a->type == FLOAT && $3 == INT) {
        printf("I2F2\n");
    }

    printf("LOADBP\n");
    printf("SHIFT(%d)\n",a->offset);
    printf("STORE\n");
    
  } 
;

// IV.2. Conditionelles
//           N.B. ces rêgles génèrent un conflit déclage reduction
//           qui est résolu comme on le souhaite par un décalage (shift)
//           avec ELSE en entrée (voir y.output)

cond :
if bool_cond inst  elsop       {}
;

elsop : else inst              {}
|                  %prec IFX   {} // juste un "truc" pour éviter le message de conflit shift / reduce
;

bool_cond : PO exp PF         {}
;

if : IF                       {}
;

else : ELSE                   {}
;

// IV.3. Iterations

loop : while while_cond inst  {}
;

while_cond : PO exp PF        {}

while : WHILE                 {}
;

// IV.4. Valeur

ret : exp
;



// V. Expressions

exp
// V.1 Exp. arithmetiques
: MOINS exp %prec UNA         {
    if($2 == INT) {
      printf("MINUSI\n");
    }else if($2 == FLOAT){
      printf("MINUSF\n");
    }
    $$ = $2;
}
         // -x + y lue comme (- x) + y  et pas - (x + y)
| exp PLUS exp {
  $$ = binop($1,$3,"ADDI","ADDF");

}
| exp MOINS exp               {
   $$ = binop($1,$3,"SUBI","SUBF");
}
| exp STAR exp                {
   $$ = binop($1,$3,"MULTI","MULTF");
}
| exp DIV exp                 {
    $$ = binop($1,$3,"DIVI","DIVF");
}
| PO exp PF                   {
  $$ =$2;
}
| ID                          {
   attribute a = get_symbol_attribute($1);
   printf("LOADBP\n");
   printf("SHIFT(%d)\n",a->offset);
   printf("LOAD\n");
   $$ = a->type;
}
| app                         {}
| NUM                         {
    printf("LOADI(%d)\n",$1);
    $$ = INT;
}
| DEC                         {
    printf("LOADF(%f)\n",$1);
    $$ = FLOAT;
}


// V.2. Booléens

| NOT exp %prec UNA           {}
| exp INF exp                 {}
| exp SUP exp                 {}
| exp EQUAL exp               {}
| exp DIFF exp                {}
| exp AND exp                 {}
| exp OR exp                  {}

;

// V.3 Applications de fonctions


app : fid PO args PF          {}
;

fid : ID                      {}

args :  arglist               {}
|                             {}
;

arglist : arglist VIR exp     {} // récursion gauche pour empiler les arguements de la fonction de gauche à droite
| exp                         {}
;



%% 
int main () {

  /* Ici on peut ouvrir le fichier source, avec les messages 
     d'erreur usuel si besoin, et rediriger l'entrée standard 
     sur ce fichier pour lancer dessus la compilation.
  */
  
  
printf("#include \"PCode.h\"\n\n");
    	 
return yyparse ();

} 

