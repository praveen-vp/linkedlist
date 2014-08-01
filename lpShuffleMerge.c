
// shufflemerge merges two lists alternatively

#include "link.h"

struct node* ShuffleMerge(struct node* a, struct node* b) 
{
				struct node* result = NULL;
				struct node** lastptr = &result;

				while (1) {
								if(a==NULL) {
												*lastptr = b;
												break;
								}
								else if(b==NULL) {
												*lastptr = a;
												break;
								}
								else {
												MoveNode(lastptr,&a);
												lastptr = &((*lastptr)->next);
												MoveNode(lastptr,&b);
												lastptr = &((*lastptr)->next);
								}
				}
			
				return result;			
}

