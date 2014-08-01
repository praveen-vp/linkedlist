
#include "link.h"

int main()
{
			struct node *head = build123();
			print(head);
			
			/*	printf("length = %d\n",length(head));
			 	printf("%d\n",lpcount(head,2));
			 	printf("%d\n",GetNth(head,2));
			 	lpdelete(&head);
			*/

			/*	printf("popped value :%d\n",pop(&head));
				printf("legth after pop :%d\n",length(head));
			*/

			/*	InsertNth(&head,2,12);
				printf("inserted :>\n");
				print(head);
			*/	

			/*	InsertNth(&head,8,12);
				printf("inserted :>\n");
				print(head);
			*/

			/*	struct node* appnd = build123();
				print(appnd);
				Append(&head,&appnd);
				print(head);
			*/

			/*	struct node* p = malloc(sizeof(struct node));
				p->next = NULL;
				p->data = 7;
			 	SortedInsert(&head,p);
				print(head);
			 	InsertSort(&head);
				print(head);
			*/

			/*	struct node* r = malloc(sizeof(struct node));
			 	struct node* a = malloc(sizeof(struct node));
			 	FrontBackSplit(head,&r,&a);	
			 	print(a);
			 	print(r);
				RemoveDuplicates(head);
				print(head);
			*/
				
			/*
				struct node* r = build123();
				int null = pop(&r);
				null = pop(&r);
				null = pop(&r);
				null = pop(&r);
				print(r);
				MoveNode(&r,&head);
				print(r);
			*/

			/* 	struct node* r = malloc(sizeof(struct node));
				struct node* a = malloc(sizeof(struct node));
				AlternatingSplit(head,&r,&a);
				print(r);
				print(a);
			*/

			/* 	struct node* r = build123();
				int null = pop(&r);
			 	struct node* a = build123();
				struct node* v = ShuffleMerge(r,a);
				print(v);
			*/

		/*	Reverse(&head);
			print(head);
		*/

}


