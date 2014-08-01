
#include "link.h"

void pushlink(struct node** headref,int data);

struct node* addathead()
{
				struct node* head = NULL;
				int i;

				for(i = 1;i<6;i++)
								pushlink(&head,i);
				return head;
}

