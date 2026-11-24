/*
 *  Table des symboles.h
 *
 *  Modified by Janin on 30/10/26.
 *  Copyright 2026 LaBRI. All rights reserved.
 *
 *  Associative array encoded as linked list of pair (symbol_name, symbol_value)
 *
 *  To be used only with getter get_symbol_value and setter set_symbol_value.
 *
 *  Type attribute can be customized.
 *
 *  Symbol names must be valid sid from Table des chaines. 
 *
 */

#ifndef TABLE_DES_SYMBOLES_H
#define TABLE_DES_SYMBOLES_H

#include "Table_des_chaines.h"

/* Déclarations des types d'attributs */

# define NBARGMAX 10

char* type2string (int);
struct ATTRIBUTE {
  int type;
  int offset;
  int depth;
  // pour les focntions
  int nb_arg; // fonction si nb_arg != 0
  int type_args [NBARGMAX];
  /* les autres attributs dont vous pourriez avoir besoin 
     pour les symboles seront déclarés ici */
  
};
   
typedef struct ATTRIBUTE * attribute;


attribute make_symbol_attribute(int type, int offset, int depth);

/* returns the pointeur to a newly allocated (but uninitialized) attribute value structure */
attribute new_attribute ();


/* get the symbol value of symb_id from the symbol table, NULL if it fails */
attribute get_symbol_attribute(sid symb_id);

/* get the symbol value of symb_id (when a function) from the symbol table, NULL if it fails */
attribute get_function_symbol_attribute(sid symb_id);


/* add the symbol symb_id with given value */
attribute set_symbol_attribute(sid symb_id,attribute value);

/* remove all symbols of depth equal or greater than the given depth */
void remove_local_symbol(int depth);


#endif
