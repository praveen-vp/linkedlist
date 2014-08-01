// sorted insert :> insert a node in a sorted manner

#include "link.h"

void SortedInsert(struct node** headref,struct node* newNode)
{
				if(*headref == NULL || (*headref)->data >= newNode->data) {
								newNode->next = *headref;
								*headref = newNode;
				}

				else {
								struct node* current = *headref;
								while (current->next != NULL && current->next->data < newNode->data) {
												current = current->next;
								}
								newNode->next = current->next;
								current->next = newNode;
				}
}
