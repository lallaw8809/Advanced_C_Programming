#include "main.h"

/********************************************************************
 *Brief     : Reverse the list
 *Arg(head) : Holds the List
 *Return    : List [New node has been added ]
*********************************************************************/
struct node *reverse(struct node *head)
{
	/* Validation of list */
	if(head == NULL || head->next == NULL){
		return head;
	}
	else{		
		struct node *cur = head;
		struct node *prev = NULL;
		struct node *temp;

		while(cur != NULL){
			temp = cur;
			cur = cur->next;
			temp->next = prev;
			prev = temp;
		}
		
		return prev;

	}

	
}
