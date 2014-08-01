
// insert sort function inserts the node in a sorted manner to a sorted list
#include "link.h"
#include <assert.h>

void InsertNth(struct node** headref,int n,int value)
{				
				int i = 0;
				struct node* current = *headref;
				
				if(n >= length(current)) {
						printf("index value higher than linklist's length :index = %d,length = %d\n",n,length(current));
						return ;
				}

				if (n==0)
						push(headref,value);

				else {
								for(;i < n-1;i++)
											current = current->next;
											push(&(current->next),value);				
				}
}

