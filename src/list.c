#include <stddef.h>
#include "list.h"


/*    listAdd   */

void listAdd(struct list_element **head, struct list_element *new_element){
	struct list_element *iterator = (struct list_element*)head;
	new_element->next = iterator->next ;
       	new_element->prev = iterator ;

	iterator->next =  new_element ;

	if(new_elementt->next != NULL){
		new_element->next->prev = new_element ;
	}
}

/* listRemowe  */

void listRemove(struct list_element *b){
	if(b->next != NULL)
		b->next->prev = b->prev ;
	b->prev->next = b->next ;
	b->next = NULL; // NULLify the element 
}



