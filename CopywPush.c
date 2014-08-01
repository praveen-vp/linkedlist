
// copylist function which uses push function

#include "link.h"

// fn => = copylist(struct node*);
struct node* copylist(struct node* head)
{
				struct node* current = head;
				struct node* newlist = NULL;
				struct node* tail = NULL;

				while (current !=NULL) {
								
								if(newlist == NULL) {
												pushlist(&newlist,current->data);
												tail = newlist;
								}

								else {
												pushlist(&(tail->next),current->data);
												tail = tail->next;
								}

								current = current->next;
				}

				return newlist;
}

