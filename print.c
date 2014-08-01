
#include "link.h"

void print(struct node *head)
{
				struct node* current = head;
								
				while(current !=NULL) {
								printf("%d-",current->data);
								current = current->next;
				}
				printf("\n");
				
}

