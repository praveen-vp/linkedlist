
// Given a linked  list head ponter ,compute 
// and return the number of nodes in the list

#include "link.h"

int length(struct node* head)
{
				struct node *current = head;
				int count = 0;
				 
				while(head != NULL) {
								count++;
								head = head->next;
				}
				return count;
}

