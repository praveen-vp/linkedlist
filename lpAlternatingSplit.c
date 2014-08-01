
// functioning =>
// head = { a,b,a,b,a}  --> AlternatingSplit(head,a,b) ==> a = {a,a,a} b ={b,b}

#include "link.h"

void AlternatingSplit(struct node* source,struct node** aref,struct node** bref)
{
				struct node* current = source;
				struct node* a = NULL;
				struct node* b = NULL;

				while(current != NULL) {
								MoveNode(&a,&current);
								if(current != NULL) {
												MoveNode(&b,&current);
								}
				}
				*aref = a;
				*bref = b;

}
