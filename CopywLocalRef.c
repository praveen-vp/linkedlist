// unusual version uses "local references" strategy instead of a tail

#include "link.h"

struct node* copylist(struct node* head)
{
				struct node* current = head;
				struct node* newlist = NULL;
				struct node** lastptr;

				lastptr = &newlist;

				while ( current != NULL) {
								pushlink( lastptr,current->data);
								lastptr = &((*lastptr)->next);
								current = current->next;
				}
				return newlist;
}

