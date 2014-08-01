
#include "link.h"

void Reverse(struct node** headref)
{
				struct node* current = *headref;
				struct node* result = NULL;

				while(current != NULL) {
								MoveNode(&result,&current);
							//	current = current->next;
				}

				*headref = result;
}

