
#include "main.h"

/********************************************************************
 *Brief     : Add the node into middle of the list.
 *Arg(head) : Holds the List
 *Return    : List [New node has been added ]
*********************************************************************/
struct node *add_middle(struct node *head)
{
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

	/* Validation of empty node */
	if(head == NULL){
		new_node->next = NULL;
		head = new_node;
	}
	else{
		struct node *single_move = head;
		struct node *double_move = head;
		struct node *next_node   = NULL;

		/* Find the middle node by move the single by once and
		   Double_move by by twice.
		   insert the node between.
		 */
		while(double_move != NULL){
			double_move = double_move->next;
			if(double_move != NULL)
				double_move = double_move->next;

			if(double_move == NULL){
				next_node         = single_move->next;
				single_move->next = new_node;
				new_node->next    = next_node;
			}
			else
				single_move = single_move->next;
		}
	}

	return head;
}

