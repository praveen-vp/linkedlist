
#include "link.h"

void FrontBackSplit(struct node* source,struct node** front,struct node** back)
{
				int f,i;

				if(length(source) < 2) {
								*front = source;
								*back = NULL;
				}

				else {
								f = (length(source)-1)/2;
								struct node* current = source;
								
								for(i = 0;i<f;i++) 
												current = current->next;

								*front = source;
								*back = current->next;
								current->next = NULL;
				}
}

