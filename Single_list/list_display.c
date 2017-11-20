
#include "single_list.h"


/********************************************************************
 *Brief     : Display the complete list
 *Arg(head) : Holds the List
 *Return    : void
*********************************************************************/
void display(struct node* head)
{
	/* Validation of head */
	if(head != NULL)
	{
		printf("\nDisplaying the List....\n");
		/* Move list till end */
 		while(head != NULL)
		{
			printf("%d ",head->data);
			head = head->next;
		}
		printf("\n\n");
	}
	else
	{
		printf("\nList is empty\n");
	}
}
