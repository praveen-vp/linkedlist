
// append node using push()

struct node* Appndpush(struct node**,headref,int num)
{
				struct node* current = *headref;

				// special case for empty list;
				if(current == NULL)
								pushlink(headref,num);
				else {
								// locatee the last node ;
								while (current->next != NULL)
												current = current->next;

								//build the node after the last node
								pushlink(&(current->next),num);
				}
}

