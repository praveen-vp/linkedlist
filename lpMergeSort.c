
// mergesort :

#include "link.h"

void MergeSort (struct node** headref)
{
				struct node* head = *headref;
				struct node * a,b;

				// base case --- length 0 or 1
				
				if((head == NULL) || (head->next == NULL)) {
								return;
				}

				FrontBackSplit(head,&a,&b);			// Split head into a and b sublists
																// we could just as well use Alternatingsplit()
				MergeSort(&a);					// recursively sort the sublists
				MergeSort(&b);

				*headref = SortedMerge(a,b);		// answer = merge the two sorted lists
																				// together
}

