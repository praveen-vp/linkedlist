
// this function remove one node from the second list to first list.
// a = {1 2 3};
// b = {1 2 3};

// MoveNode(&,&b);
// gives=>   a = {1 1 2 3};b = {2 3};

#include "link.h"
#include <assert.h>
/*
void MoveNode (struct node** a,struct node** b) 
{
				int data = pop(b);
				push(&a,data);
}
*/

//solution =>
void MoveNode(struct node** destRef, struct node** sourceRef) 
{
				
				struct node* newNode = *sourceRef;	// the front source node
				assert(newNode != NULL);
				
				*sourceRef = newNode->next;					// Advance the source pointer
				newNode->next = *destRef;						//	Link the old dest to the new node
					
				*destRef = newNode; 								// Move dest to point to the new node
	}	

