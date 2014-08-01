
// Insertsort function sorts a given list in the ascending order

#include "link.h"

void InsertSort(struct node** headref)
{
				struct node* current = *headref;			// value in headref ie, first node pointer
				struct node* new = NULL;

				while(current != NULL) {
								struct node* start = malloc(sizeof(struct node));
								start->data = pop(headref);
								SortedInsert(&new,start);
								current = current->next;
				}

				*headref = new;
}

