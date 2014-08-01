
// fuction takes two head pointers, say a,b as parameters and append b to a;

#include "link.h"

void Append(struct node** headref,struct node** apnd)
{
				struct node* current = *headref;

				if(current->next == NULL)
								*headref = *apnd;
				else {
								while (current->next != NULL)
												current = current->next;

								current->next = *apnd;
				}
				*apnd = NULL;
}

