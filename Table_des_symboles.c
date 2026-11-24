/*
 *  Table des symboles.c
 *
 *  Modified by Janin on 30/10/26.
 *  Copyright 2026 LaBRI. All rights reserved.
 *
 */


#include <stdlib.h>
#include <stdio.h>

#include "Table_des_symboles.h"

/* bit  type handling */

  


/* Attribute types */

attribute new_attribute () {
  attribute r;
  r  = malloc (sizeof (struct ATTRIBUTE));
  if (r==NULL) {printf("Failed Malloc\n"); exit(-1);}
  return r;
};

attribute make_symbol_attribute(int type, int offset, int depth)
{
  attribute r = new_attribute();
  r -> type = type;
  r -> offset = offset;
  r -> depth = depth;
  r -> nb_arg = 0;
  return r;
}



/* The storage structure is implemented as a linked chain */

/* linked element def */

typedef struct elem {
	sid symbol_name;
	attribute attribute_value;
	struct elem * next;
} elem;

/* linked chain initial element */
static elem * storage=NULL;

/* get the symbol value of symb_id from the symbol table */
attribute get_symbol_attribute(sid symb_id) {
	elem * tracker=storage;

	/* look into the linked list for the symbol value */
	while (tracker) {
		if (tracker -> symbol_name == symb_id) return tracker -> attribute_value; 
		tracker = tracker -> next;
	}
    
	/* if not found does cause an error */
	fprintf(stderr,"Error : symbol %s is not a valid defined symbol\n",(char *) symb_id);
	exit(-1);
};

/* get the symbol value of symb_id (when a function) from the symbol table, NULL if it fails */
attribute get_function_symbol_attribute(sid symb_id)
  {
	elem * tracker=storage;

	/* look into the linked list for the symbol value */
	while (tracker) {
	  if ((tracker -> symbol_name == symb_id) && ((tracker ->attribute_value)->nb_arg > 0))
	    return tracker -> attribute_value; 
	  tracker = tracker -> next;
	}
    
	/* if not found does cause an error */
	fprintf(stderr,"Error : symbol %s is not a valid defined function symbol\n",(char *) symb_id);
	exit(-1);
};
  


/* add the symbol symb_id with given value */
attribute set_symbol_attribute(sid symb_id,attribute value) {

	elem * tracker;
	tracker = malloc(sizeof(elem));
	tracker -> symbol_name = symb_id;
	tracker -> attribute_value = value;
	tracker -> next = storage;
	storage = tracker;
	return storage -> attribute_value;
}


/* remove all symbols of the given depth */
void remove_local_symbol(int depth) {
  // printf("// Removing variables at depth greater or equal to %i\n", depth);
  elem * tracker = storage;
  while (tracker && ((tracker->attribute_value) -> depth) >= depth) {
    elem * oldtracker = tracker;
    printf("// removing variable %s in TDS at depth %i\n",
	   tracker->symbol_name, (tracker->attribute_value) -> depth);
    tracker = tracker -> next;
    free(oldtracker -> attribute_value);
    free(oldtracker);
    
  }
  if (tracker == NULL) printf("// This is an error of the compiler\n");
  storage = tracker;
};

