
#include "link.h"

struct node* SortedMerge(struct node* a,struct node* b)
{

				struct node* result = NULL;
				struct node** lastPtr = &result;

				while (1) {
								
								if(a ==NULL) {
												*lastPtr = b;
												break;
								}
								else if (b ==NULL) {
												*lastPtr = a;
												break;
								}

								if(a->data <= b->data) 
												MoveNode (lastPtr,&a);
						
								else 
												MoveNode(lastPtr,&b);

								lastPtr = &((*lastPtr)->next);
				}
				return result;
}
