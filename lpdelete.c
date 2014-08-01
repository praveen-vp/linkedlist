
// delete the link list entirly

#include "link.h"

void lpdelete(struct node** headref)
{
				struct node* current = *headref;
				struct node* next;
				int count = 0;
				printf("%p -> ,%p\n",headref,*headref);
				while (current != NULL) {
								print(current);	
								next = current->next;
								free(current);
								current = next;
				}

				*headref = NULL;
}

