#include "main.h"

/********************************************************************
 *Brief     : Delete the end node from the list
 *Arg(head) : Holds the List
 *Return    : List [New node has been added ]
*********************************************************************/
struct node *delete_end(struct node *head)
{
	/* Validation of list */
	if(head == NULL || head->next == NULL){
		free(head);
		head = NULL;
	}
	/* Remove the end node */
	else{
		struct node *cur  = head;
		struct node *prev = head;

		/* Move thre node till end */
		while(cur->next != NULL){
			prev = cur;
			cur = cur->next;
		}
		free(prev->next);
		prev->next = NULL;		
	}

	return head;
}
