
// copy list with a temporary list to take of the first node case;

#include "link.h"

struct node* copylist(struct node* head)
{
				struct node* current = head;
				struct node* tail;
				struct node dummy;

				dummy.next = NULL;
				tail = &dummy; //start the tail pointing at the dummy

				while (current != NULL) {
								pushlisk(&(tail->next),current->data);
								tail = tail->next;
				}

				current = current->next;

				return dummy.next;

}

