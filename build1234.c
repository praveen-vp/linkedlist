
/*	 Build the list {1, 2, 3} in the heap and store
	 its head pointer in a local stack variable.
	 Returns the head pointer to the caller.
*/

#include "link.h"

struct node* build123(void) {
			
				struct node* head = NULL;
				push(&head,4);
				push(&head,3);
				push(&head,2);
				push(&head,1);

				return head;			
				// returns the head to the caller;
}

