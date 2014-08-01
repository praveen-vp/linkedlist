
// copylist fn copies a given list and return a pointer that
// refer to the copy of the list

#include "link.h"

// fn call => struct node* = copylist(struct node* head);
struct node* copylist(struct node* head)
{
				struct node* current = head;	// used to iterate over the list
				struct node* newlist = NULL;	// head of the new list
				struct node* tail = NULL;			// kept pointing to the last node in the new list

				while(current != NULL) {

								if(newlist == NULL) {
												// specal case for the first newnode
												newlist = malloc(sizeof(struct node));
												newlist->data = current->data;
												newlist->next = NULL;
												tail = newlist;
								}
								else {
												tail->next = malloc(sizeof(struct node));
												tail = tail->next;
												tail->data = current->data;
												tail->next = NULL;
								}

								current = current->next;
				}

				return newlist;
}

