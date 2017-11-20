#include "main.h"

/********************************************************************
 *Brief     : Delete the node into list at front
 *Arg(head) : Holds the List
 *Return    : List [New node has been added ]
*********************************************************************/
struct node *delete_front(struct node *head)
{
	/* Validation of list */
	if(head == NULL){
		printf("List is empty\n");
	}
	else{/* Remove the node from front */

		struct node *temp = head;
		head = head->next;
		free(temp);
	}

	return head;
}
