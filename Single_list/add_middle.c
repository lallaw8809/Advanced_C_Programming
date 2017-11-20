
#include "main.h"

/********************************************************************
 *Brief     : Add the node into middle of the list.
 *Arg(head) : Holds the List
 *Return    : List [New node has been added ]
*********************************************************************/
struct node *add_middle(struct node *head)
{
	struct node *single_move = head;
	struct node *double_move = head;
	int data;

	/* Create a new node */
	struct node *new_node =  (struct node *)malloc(sizeof(struct node));
	/* Validation of allocation */
	if(new_node == NULL){
		printf("Unable to allocate a memory for new node\n");
		exit(-1);
	}
	
	printf("Enter the data\n");
	scanf("%d",&new_node->data);
	
	if(head == NULL){
		new_node->next = NULL;
		return new_node;
	}
	else{
		while(double_move->next != NULL){
			single_move = single_move->next;
			double_move = double_move->next->next;
		}
		single_move->next = new_node;
		new_node->next    = double_move;
	}
}




