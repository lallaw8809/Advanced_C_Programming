#include "main.h"

/********************************************************************
 *Brief     : Reverse the list
 *Arg(head) : Holds the List
 *Return    : List [New node has been added ]
*********************************************************************/
struct node *reverse(struct node *head)
{
	/* Validation of list */
	if(head == NULL ){
		printf("I am here\n");
		return head;
	}
	else{
		printf("I am here...1\n");
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
