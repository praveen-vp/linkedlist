
// pop function pop the first element from the linklist

#include <assert.h>
#include "link.h"

int pop(struct node** headref)
{
				struct node* current = *headref;
				
				assert(current != NULL);
				
				int result = current->data;
				*headref = current->next;
				free(current);

				return result;

}
				 
