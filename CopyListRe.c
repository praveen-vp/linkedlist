
// recursive variant of copylist

#include "link.h"

struct node* copylist( struct node* head)
{
				if(head == NULL)
								return NULL;
				else {
								struct node* newlist = malloc(sizeo(struct node));
								
								newlist->data = current->data;
								// recur for rest;
								newlist->next = (copylist->next);
								return newlist;
				}

}

