/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "myp.y"


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



 

#line 104 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    DEC = 259,                     /* DEC  */
    PRG = 260,                     /* PRG  */
    FUN = 261,                     /* FUN  */
    VAR = 262,                     /* VAR  */
    BIN = 263,                     /* BIN  */
    BOUT = 264,                    /* BOUT  */
    AFF = 265,                     /* AFF  */
    CLN = 266,                     /* CLN  */
    DOT = 267,                     /* DOT  */
    INT = 268,                     /* INT  */
    FLOAT = 269,                   /* FLOAT  */
    VOID = 270,                    /* VOID  */
    ID = 271,                      /* ID  */
    PO = 272,                      /* PO  */
    PF = 273,                      /* PF  */
    PV = 274,                      /* PV  */
    VIR = 275,                     /* VIR  */
    IF = 276,                      /* IF  */
    ELSE = 277,                    /* ELSE  */
    WHILE = 278,                   /* WHILE  */
    AND = 279,                     /* AND  */
    OR = 280,                      /* OR  */
    NOT = 281,                     /* NOT  */
    DIFF = 282,                    /* DIFF  */
    EQUAL = 283,                   /* EQUAL  */
    SUP = 284,                     /* SUP  */
    INF = 285,                     /* INF  */
    PLUS = 286,                    /* PLUS  */
    MOINS = 287,                   /* MOINS  */
    STAR = 288,                    /* STAR  */
    DIV = 289,                     /* DIV  */
    ARR = 290,                     /* ARR  */
    IFX = 291,                     /* IFX  */
    UNA = 292                      /* UNA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define DEC 259
#define PRG 260
#define FUN 261
#define VAR 262
#define BIN 263
#define BOUT 264
#define AFF 265
#define CLN 266
#define DOT 267
#define INT 268
#define FLOAT 269
#define VOID 270
#define ID 271
#define PO 272
#define PF 273
#define PV 274
#define VIR 275
#define IF 276
#define ELSE 277
#define WHILE 278
#define AND 279
#define OR 280
#define NOT 281
#define DIFF 282
#define EQUAL 283
#define SUP 284
#define INF 285
#define PLUS 286
#define MOINS 287
#define STAR 288
#define DIV 289
#define ARR 290
#define IFX 291
#define UNA 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "myp.y"
 
  struct ATTRIBUTE * symbol_value;
  char * string_value;
  int int_value;
  float float_value;
  int type_value;
  int label_value;
  int offset_value;

#line 241 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_DEC = 4,                        /* DEC  */
  YYSYMBOL_PRG = 5,                        /* PRG  */
  YYSYMBOL_FUN = 6,                        /* FUN  */
  YYSYMBOL_VAR = 7,                        /* VAR  */
  YYSYMBOL_BIN = 8,                        /* BIN  */
  YYSYMBOL_BOUT = 9,                       /* BOUT  */
  YYSYMBOL_AFF = 10,                       /* AFF  */
  YYSYMBOL_CLN = 11,                       /* CLN  */
  YYSYMBOL_DOT = 12,                       /* DOT  */
  YYSYMBOL_INT = 13,                       /* INT  */
  YYSYMBOL_FLOAT = 14,                     /* FLOAT  */
  YYSYMBOL_VOID = 15,                      /* VOID  */
  YYSYMBOL_ID = 16,                        /* ID  */
  YYSYMBOL_PO = 17,                        /* PO  */
  YYSYMBOL_PF = 18,                        /* PF  */
  YYSYMBOL_PV = 19,                        /* PV  */
  YYSYMBOL_VIR = 20,                       /* VIR  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_AND = 24,                       /* AND  */
  YYSYMBOL_OR = 25,                        /* OR  */
  YYSYMBOL_NOT = 26,                       /* NOT  */
  YYSYMBOL_DIFF = 27,                      /* DIFF  */
  YYSYMBOL_EQUAL = 28,                     /* EQUAL  */
  YYSYMBOL_SUP = 29,                       /* SUP  */
  YYSYMBOL_INF = 30,                       /* INF  */
  YYSYMBOL_PLUS = 31,                      /* PLUS  */
  YYSYMBOL_MOINS = 32,                     /* MOINS  */
  YYSYMBOL_STAR = 33,                      /* STAR  */
  YYSYMBOL_DIV = 34,                       /* DIV  */
  YYSYMBOL_ARR = 35,                       /* ARR  */
  YYSYMBOL_IFX = 36,                       /* IFX  */
  YYSYMBOL_UNA = 37,                       /* UNA  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_prog = 39,                      /* prog  */
  YYSYMBOL_prog_head = 40,                 /* prog_head  */
  YYSYMBOL_prog_body = 41,                 /* prog_body  */
  YYSYMBOL_42_1 = 42,                      /* $@1  */
  YYSYMBOL_opt_vars = 43,                  /* opt_vars  */
  YYSYMBOL_var = 44,                       /* var  */
  YYSYMBOL_decl_list = 45,                 /* decl_list  */
  YYSYMBOL_decl = 46,                      /* decl  */
  YYSYMBOL_type = 47,                      /* type  */
  YYSYMBOL_typename = 48,                  /* typename  */
  YYSYMBOL_opt_funs = 49,                  /* opt_funs  */
  YYSYMBOL_function = 50,                  /* function  */
  YYSYMBOL_fun_head = 51,                  /* fun_head  */
  YYSYMBOL_fun = 52,                       /* fun  */
  YYSYMBOL_fun_name = 53,                  /* fun_name  */
  YYSYMBOL_opt_arg = 54,                   /* opt_arg  */
  YYSYMBOL_arg_list = 55,                  /* arg_list  */
  YYSYMBOL_arg = 56,                       /* arg  */
  YYSYMBOL_vir = 57,                       /* vir  */
  YYSYMBOL_fun_body = 58,                  /* fun_body  */
  YYSYMBOL_inst_list = 59,                 /* inst_list  */
  YYSYMBOL_inst = 60,                      /* inst  */
  YYSYMBOL_block_begin = 61,               /* block_begin  */
  YYSYMBOL_block_end = 62,                 /* block_end  */
  YYSYMBOL_aff = 63,                       /* aff  */
  YYSYMBOL_cond = 64,                      /* cond  */
  YYSYMBOL_elsop = 65,                     /* elsop  */
  YYSYMBOL_bool_cond = 66,                 /* bool_cond  */
  YYSYMBOL_if = 67,                        /* if  */
  YYSYMBOL_else = 68,                      /* else  */
  YYSYMBOL_loop = 69,                      /* loop  */
  YYSYMBOL_while_cond = 70,                /* while_cond  */
  YYSYMBOL_while = 71,                     /* while  */
  YYSYMBOL_ret = 72,                       /* ret  */
  YYSYMBOL_exp = 73,                       /* exp  */
  YYSYMBOL_app = 74,                       /* app  */
  YYSYMBOL_fid = 75,                       /* fid  */
  YYSYMBOL_args = 76,                      /* args  */
  YYSYMBOL_arglist = 77                    /* arglist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 70 "myp.y"

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

  
#line 88 "myp.y"



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
#line 126 "myp.y"


  int global_offset = 0;


#line 400 "y.tab.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   220

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  128

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   145,   145,   147,   151,   150,   161,   162,   165,   168,
     169,   172,   190,   194,   195,   196,   202,   203,   206,   209,
     212,   214,   217,   218,   220,   222,   224,   227,   230,   236,
     237,   243,   244,   245,   246,   247,   252,   256,   263,   289,
     292,   293,   296,   299,   302,   307,   310,   312,   317,   326,
     335,   339,   342,   345,   348,   351,   358,   359,   363,   371,
     372,   373,   374,   375,   376,   377,   384,   387,   389,   390,
     393,   394
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "DEC", "PRG",
  "FUN", "VAR", "BIN", "BOUT", "AFF", "CLN", "DOT", "INT", "FLOAT", "VOID",
  "ID", "PO", "PF", "PV", "VIR", "IF", "ELSE", "WHILE", "AND", "OR", "NOT",
  "DIFF", "EQUAL", "SUP", "INF", "PLUS", "MOINS", "STAR", "DIV", "ARR",
  "IFX", "UNA", "$accept", "prog", "prog_head", "prog_body", "$@1",
  "opt_vars", "var", "decl_list", "decl", "type", "typename", "opt_funs",
  "function", "fun_head", "fun", "fun_name", "opt_arg", "arg_list", "arg",
  "vir", "fun_body", "inst_list", "inst", "block_begin", "block_end",
  "aff", "cond", "elsop", "bool_cond", "if", "else", "loop", "while_cond",
  "while", "ret", "exp", "app", "fid", "args", "arglist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
#endif

#define YYPACT_NINF (-50)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-68)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,     9,     8,   -50,    12,   -50,   -50,    22,   -50,   -50,
      26,   -50,    26,    36,   -50,    45,    39,    50,   -50,   -50,
      42,   116,    49,    39,   -50,   116,    46,    54,   -50,   -50,
      -8,     3,   -50,   -50,     3,     3,    53,    47,    48,   -50,
     -50,    52,   -50,    55,   -50,   167,   -50,    57,    -3,   -50,
      74,    60,    58,    62,    -3,     3,    63,   122,   -50,   -50,
     -50,   116,    72,    56,   -50,     3,   116,     3,   116,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     -50,   -50,   -50,    66,   -50,    68,    -3,   -50,   -50,    46,
     -50,   167,   -50,    95,   -50,   -50,   139,    44,   156,   -50,
     186,   178,   -16,   -16,   -16,   -16,    -7,    -7,   -50,   -50,
     167,    70,    69,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   116,   -50,   -50,     3,   -50,   167
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    17,     0,     1,     2,     4,     3,    20,
       7,    16,     7,     0,     8,     0,     0,     0,    18,    21,
      23,     7,     0,     6,    10,     7,     0,     0,    57,    58,
      55,     0,    43,    47,     0,     0,     0,     7,     0,    32,
      34,     0,    35,     0,    33,    48,    56,     0,     0,     9,
       7,     0,     0,    25,     0,     0,    55,     0,    59,    49,
      36,     7,     0,     0,    30,     0,     7,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
      13,    14,    15,     0,    12,     0,     0,    22,    27,     0,
      19,    38,    54,     7,     5,    29,     0,    41,     0,    45,
      64,    65,    63,    62,    61,    60,    50,    51,    52,    53,
      71,     0,    68,    11,    28,    26,    24,    37,    31,    42,
      44,    39,     7,    46,    66,     0,    40,    70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -50,   -50,   -50,   -50,   -50,    11,   -50,   -50,    73,   -49,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     4,   -50,   -50,
     -50,   -12,   -36,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -31,   -50,   -50,   -50,   -50
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     6,    10,    36,    16,    23,    24,    83,
      84,     7,    11,    12,    13,    20,    27,    52,    53,    89,
      18,    37,    38,    61,   118,    39,    40,   121,    66,    41,
     122,    42,    68,    43,    44,    45,    46,    47,   111,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      57,    63,    55,    58,    59,    90,    28,    29,     5,   -67,
      80,    81,    82,    50,    63,    75,    76,    77,    78,    56,
      31,    15,     1,    17,    91,     4,    77,    78,     9,    34,
      97,     8,    99,    14,    96,    35,    98,   115,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    93,
      28,    29,    19,    21,    14,    22,    62,    63,    25,    26,
      48,    60,    51,    30,    31,    54,   120,    64,    32,    65,
      33,    86,    67,    34,    79,    95,    87,    28,    29,    35,
     -67,    14,    88,    85,    94,   113,   126,   114,   124,   125,
      30,    31,     0,   116,   127,    32,    49,    33,    28,    29,
      34,     0,    14,     0,   117,     0,    35,     0,     0,     0,
       0,    30,    31,     0,     0,     0,    32,     0,    33,    28,
      29,    34,     0,    14,     0,     0,     0,    35,     0,     0,
       0,     0,    30,    31,     0,     0,     0,    32,     0,    33,
      92,     0,    34,     0,     0,     0,    69,    70,    35,    71,
      72,    73,    74,    75,    76,    77,    78,   119,     0,     0,
       0,     0,     0,    69,    70,     0,    71,    72,    73,    74,
      75,    76,    77,    78,   123,     0,     0,     0,     0,     0,
      69,    70,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    69,    70,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    69,     0,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    71,    72,    73,    74,    75,    76,    77,
      78
};

static const yytype_int8 yycheck[] =
{
      31,    37,    10,    34,    35,    54,     3,     4,     0,    17,
      13,    14,    15,    25,    50,    31,    32,    33,    34,    16,
      17,    10,     5,    12,    55,    16,    33,    34,     6,    26,
      66,    19,    68,     7,    65,    32,    67,    86,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    61,
       3,     4,    16,     8,     7,    16,     9,    93,     8,    17,
      11,     8,    16,    16,    17,    11,    22,    19,    21,    17,
      23,    11,    17,    26,    17,    19,    18,     3,     4,    32,
      17,     7,    20,     9,    12,    19,   122,    19,    18,    20,
      16,    17,    -1,    89,   125,    21,    23,    23,     3,     4,
      26,    -1,     7,    -1,     9,    -1,    32,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    23,     3,
       4,    26,    -1,     7,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    23,
      18,    -1,    26,    -1,    -1,    -1,    24,    25,    32,    27,
      28,    29,    30,    31,    32,    33,    34,    18,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    18,    -1,    -1,    -1,    -1,    -1,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    24,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    27,    28,    29,    30,    31,    32,    33,
      34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    39,    40,    16,     0,    41,    49,    19,     6,
      42,    50,    51,    52,     7,    43,    44,    43,    58,    16,
      53,     8,    16,    45,    46,     8,    17,    54,     3,     4,
      16,    17,    21,    23,    26,    32,    43,    59,    60,    63,
      64,    67,    69,    71,    72,    73,    74,    75,    11,    46,
      59,    16,    55,    56,    11,    10,    16,    73,    73,    73,
       8,    61,     9,    60,    19,    17,    66,    17,    70,    24,
      25,    27,    28,    29,    30,    31,    32,    33,    34,    17,
      13,    14,    15,    47,    48,     9,    11,    18,    20,    57,
      47,    73,    18,    59,    12,    19,    73,    60,    73,    60,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    76,    77,    19,    19,    47,    55,     9,    62,    18,
      22,    65,    68,    18,    18,    20,    60,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    42,    41,    43,    43,    44,    45,
      45,    46,    47,    48,    48,    48,    49,    49,    50,    51,
      52,    53,    54,    54,    55,    55,    56,    57,    58,    59,
      59,    60,    60,    60,    60,    60,    61,    62,    63,    64,
      65,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    74,    75,    76,    76,
      77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     0,     7,     2,     0,     1,     2,
       1,     4,     1,     1,     1,     1,     2,     0,     2,     5,
       1,     1,     3,     0,     3,     1,     3,     1,     5,     3,
       2,     4,     1,     1,     1,     1,     1,     1,     3,     4,
       2,     0,     3,     1,     1,     3,     3,     1,     1,     2,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     2,
       3,     3,     3,     3,     3,     3,     4,     1,     1,     0,
       3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* $@1: %empty  */
#line 151 "myp.y"
            {printf("%s\n",start_main);}
#line 1458 "y.tab.c"
    break;

  case 5: /* prog_body: opt_funs $@1 opt_vars BIN inst_list BOUT DOT  */
#line 154 "myp.y"
            {printf("%s\n",end_main);}
#line 1464 "y.tab.c"
    break;

  case 9: /* decl_list: decl_list decl  */
#line 168 "myp.y"
                             {}
#line 1470 "y.tab.c"
    break;

  case 10: /* decl_list: decl  */
#line 169 "myp.y"
                             {}
#line 1476 "y.tab.c"
    break;

  case 11: /* decl: ID CLN type PV  */
#line 172 "myp.y"
                      {
    attribute a;

    a = make_symbol_attribute((yyvsp[-1].type_value), global_offset, 0);
  

    set_symbol_attribute((yyvsp[-3].string_value), a);

    if ((yyvsp[-1].type_value) == INT) {
        printf("LOADI(0)\n");
    }
    else if ((yyvsp[-1].type_value) == FLOAT) {
        printf("LOADF(0.0)\n");
    }
    global_offset ++;
}
#line 1497 "y.tab.c"
    break;

  case 12: /* type: typename  */
#line 190 "myp.y"
                               {}
#line 1503 "y.tab.c"
    break;

  case 13: /* typename: INT  */
#line 194 "myp.y"
                               {(yyval.type_value)=INT;}
#line 1509 "y.tab.c"
    break;

  case 14: /* typename: FLOAT  */
#line 195 "myp.y"
                               {(yyval.type_value)=FLOAT;}
#line 1515 "y.tab.c"
    break;

  case 15: /* typename: VOID  */
#line 196 "myp.y"
                               {(yyval.type_value)=VOID;}
#line 1521 "y.tab.c"
    break;

  case 17: /* opt_funs: %empty  */
#line 203 "myp.y"
  {printf("/* (Optionnal) functions' target PCode */\n\n");}
#line 1527 "y.tab.c"
    break;

  case 18: /* function: fun_head fun_body  */
#line 206 "myp.y"
                             {}
#line 1533 "y.tab.c"
    break;

  case 19: /* fun_head: fun fun_name opt_arg CLN type  */
#line 209 "myp.y"
                                         {}
#line 1539 "y.tab.c"
    break;

  case 26: /* arg: ID CLN type  */
#line 224 "myp.y"
                               {}
#line 1545 "y.tab.c"
    break;

  case 27: /* vir: VIR  */
#line 227 "myp.y"
                               {}
#line 1551 "y.tab.c"
    break;

  case 28: /* fun_body: opt_vars BIN inst_list BOUT PV  */
#line 230 "myp.y"
                                             {}
#line 1557 "y.tab.c"
    break;

  case 29: /* inst_list: inst_list inst PV  */
#line 236 "myp.y"
                               {}
#line 1563 "y.tab.c"
    break;

  case 30: /* inst_list: inst PV  */
#line 237 "myp.y"
                               {}
#line 1569 "y.tab.c"
    break;

  case 31: /* inst: opt_vars block_begin inst_list block_end  */
#line 243 "myp.y"
                                           {}
#line 1575 "y.tab.c"
    break;

  case 32: /* inst: aff  */
#line 244 "myp.y"
                              {}
#line 1581 "y.tab.c"
    break;

  case 33: /* inst: ret  */
#line 245 "myp.y"
                              {}
#line 1587 "y.tab.c"
    break;

  case 34: /* inst: cond  */
#line 246 "myp.y"
                              {}
#line 1593 "y.tab.c"
    break;

  case 35: /* inst: loop  */
#line 247 "myp.y"
                              {}
#line 1599 "y.tab.c"
    break;

  case 38: /* aff: ID AFF exp  */
#line 263 "myp.y"
                 {
    attribute a = get_symbol_attribute((yyvsp[-2].string_value));

    // Affectation float -> int interdite
    if (a->type == INT && (yyvsp[0].type_value) == FLOAT) {
        yyerror("Impossible d'affecter un float à un int");
    }

    // Conversion int -> float autorisée
    if (a->type == FLOAT && (yyvsp[0].type_value) == INT) {
        printf("I2F2\n");
    }

    printf("LOADBP\n");
    printf("SHIFT(%d)\n",a->offset);
    printf("STORE\n");
    
  }
#line 1622 "y.tab.c"
    break;

  case 39: /* cond: if bool_cond inst elsop  */
#line 289 "myp.y"
                               {}
#line 1628 "y.tab.c"
    break;

  case 40: /* elsop: else inst  */
#line 292 "myp.y"
                               {}
#line 1634 "y.tab.c"
    break;

  case 41: /* elsop: %empty  */
#line 293 "myp.y"
                               {}
#line 1640 "y.tab.c"
    break;

  case 42: /* bool_cond: PO exp PF  */
#line 296 "myp.y"
                              {}
#line 1646 "y.tab.c"
    break;

  case 43: /* if: IF  */
#line 299 "myp.y"
                              {}
#line 1652 "y.tab.c"
    break;

  case 44: /* else: ELSE  */
#line 302 "myp.y"
                              {}
#line 1658 "y.tab.c"
    break;

  case 45: /* loop: while while_cond inst  */
#line 307 "myp.y"
                              {}
#line 1664 "y.tab.c"
    break;

  case 46: /* while_cond: PO exp PF  */
#line 310 "myp.y"
                              {}
#line 1670 "y.tab.c"
    break;

  case 47: /* while: WHILE  */
#line 312 "myp.y"
                              {}
#line 1676 "y.tab.c"
    break;

  case 49: /* exp: MOINS exp  */
#line 326 "myp.y"
                              {
    if((yyvsp[0].type_value) == INT) {
      printf("MINUSI\n");
    }else if((yyvsp[0].type_value) == FLOAT){
      printf("MINUSF\n");
    }
    (yyval.type_value) = (yyvsp[0].type_value);
}
#line 1689 "y.tab.c"
    break;

  case 50: /* exp: exp PLUS exp  */
#line 335 "myp.y"
               {
  (yyval.type_value) = binop((yyvsp[-2].type_value),(yyvsp[0].type_value),"ADDI","ADDF");

}
#line 1698 "y.tab.c"
    break;

  case 51: /* exp: exp MOINS exp  */
#line 339 "myp.y"
                              {
   (yyval.type_value) = binop((yyvsp[-2].type_value),(yyvsp[0].type_value),"SUBI","SUBF");
}
#line 1706 "y.tab.c"
    break;

  case 52: /* exp: exp STAR exp  */
#line 342 "myp.y"
                              {
   (yyval.type_value) = binop((yyvsp[-2].type_value),(yyvsp[0].type_value),"MULTI","MULTF");
}
#line 1714 "y.tab.c"
    break;

  case 53: /* exp: exp DIV exp  */
#line 345 "myp.y"
                              {
    (yyval.type_value) = binop((yyvsp[-2].type_value),(yyvsp[0].type_value),"DIVI","DIVF");
}
#line 1722 "y.tab.c"
    break;

  case 54: /* exp: PO exp PF  */
#line 348 "myp.y"
                              {
  (yyval.type_value) =(yyvsp[-1].type_value);
}
#line 1730 "y.tab.c"
    break;

  case 55: /* exp: ID  */
#line 351 "myp.y"
                              {
   attribute a = get_symbol_attribute((yyvsp[0].string_value));
   printf("LOADBP\n");
   printf("SHIFT(%d)\n",a->offset);
   printf("LOAD\n");
   (yyval.type_value) = a->type;
}
#line 1742 "y.tab.c"
    break;

  case 56: /* exp: app  */
#line 358 "myp.y"
                              {}
#line 1748 "y.tab.c"
    break;

  case 57: /* exp: NUM  */
#line 359 "myp.y"
                              {
    printf("LOADI(%d)\n",(yyvsp[0].int_value));
    (yyval.type_value) = INT;
}
#line 1757 "y.tab.c"
    break;

  case 58: /* exp: DEC  */
#line 363 "myp.y"
                              {
    printf("LOADF(%f)\n",(yyvsp[0].float_value));
    (yyval.type_value) = FLOAT;
}
#line 1766 "y.tab.c"
    break;

  case 59: /* exp: NOT exp  */
#line 371 "myp.y"
                              {}
#line 1772 "y.tab.c"
    break;

  case 60: /* exp: exp INF exp  */
#line 372 "myp.y"
                              {}
#line 1778 "y.tab.c"
    break;

  case 61: /* exp: exp SUP exp  */
#line 373 "myp.y"
                              {}
#line 1784 "y.tab.c"
    break;

  case 62: /* exp: exp EQUAL exp  */
#line 374 "myp.y"
                              {}
#line 1790 "y.tab.c"
    break;

  case 63: /* exp: exp DIFF exp  */
#line 375 "myp.y"
                              {}
#line 1796 "y.tab.c"
    break;

  case 64: /* exp: exp AND exp  */
#line 376 "myp.y"
                              {}
#line 1802 "y.tab.c"
    break;

  case 65: /* exp: exp OR exp  */
#line 377 "myp.y"
                              {}
#line 1808 "y.tab.c"
    break;

  case 66: /* app: fid PO args PF  */
#line 384 "myp.y"
                              {}
#line 1814 "y.tab.c"
    break;

  case 67: /* fid: ID  */
#line 387 "myp.y"
                              {}
#line 1820 "y.tab.c"
    break;

  case 68: /* args: arglist  */
#line 389 "myp.y"
                              {}
#line 1826 "y.tab.c"
    break;

  case 69: /* args: %empty  */
#line 390 "myp.y"
                              {}
#line 1832 "y.tab.c"
    break;

  case 70: /* arglist: arglist VIR exp  */
#line 393 "myp.y"
                              {}
#line 1838 "y.tab.c"
    break;

  case 71: /* arglist: exp  */
#line 394 "myp.y"
                              {}
#line 1844 "y.tab.c"
    break;


#line 1848 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 399 "myp.y"
 
int main () {

  /* Ici on peut ouvrir le fichier source, avec les messages 
     d'erreur usuel si besoin, et rediriger l'entrée standard 
     sur ce fichier pour lancer dessus la compilation.
  */
  
  
printf("#include \"PCode.h\"\n\n");
    	 
return yyparse ();

} 

