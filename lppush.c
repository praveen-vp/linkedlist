
/*
	 Takes a list and a data value.
	 Creates a new link with the given data
	 and pushes to the front of the 
	 given list;
*/
// function call==> pushlink(&head,data);
#include "link.h"

void push(struct node** headref,int data)
{
				struct node* newNode = malloc(sizeof(struct node));

				newNode->data = data;
				newNode->next = *headref; // the '*' to dereference
			 														//	back to the realhead
				*headref = newNode;				
}

