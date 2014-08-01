
// this function removes the duplicates of data presented in 
// sorted list 
#include "link.h"

void RemoveDuplicates(struct node* head)
{
				struct node* current = head;

				if(head == NULL)
								return ;

				while(current->next != NULL) {

								if(current->data == current->next->data) {
												free(current->next);
												print(head);
												current->next = current->next->next;
								}

								else
												current = current->next;
				}
}

