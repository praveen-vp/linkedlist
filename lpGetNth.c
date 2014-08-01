
#include "link.h"

int GetNth(struct node *head,int nth)
{
				struct node *current = head;
				int count = 0;

				for(count = 0;current != NULL; count++) {
								if(nth == count)
												return current->data;
								current = current->next;
				}
				return 0;
}


