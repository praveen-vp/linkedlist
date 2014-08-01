
#include "link.h"

// fn add a new node at the tail end of the list;
//													""""   					""""";

struct node* appendnode(struct node** headref,int num) 
{
				struct node* current = *headref;
				struct node* newnode;

				newnode = malloc(sizeof(struct node));
				newnode->data = num;
				newnode->next = NULL;

				// special case for length 0
				if(current == NULL) 
								*headref = newnode;
				
				// Locate the last node
				else {
								while(current->next != NULL) {
												current = current->next;
								}

								current->next = newnode;
				}
}		


