
// count the number of occurence of a specific 
// number in the link list;

#include "link.h"

int lpcount(struct node* head,int num)
{
				struct node *current = head;
				int count = 0;

				while(current != NULL) {
								if(num == current->data)
												count++;
								current = current->next;
				}

				return count;
}

