#include "main.h"

/********************************************************************
 *Brief     : Add the node into list at end
 *Arg(head) : holds the List
 *Return    : List [New node has been added ]
*********************************************************************/
struct node *add_end(struct node *head)
{
	/* Create a new node */
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	/* Validation of allocation */
	if(new_node == NULL){
		printf("Unable to allocate a memory for new node\n");
		exit(-1);
	}

	/* Add the data into the List */	
	printf("\nEnter the data to add front\n");
	scanf("%d",&new_node->data);
	new_node->next = NULL;

	/* Validation of List */
	if(head == NULL)
		head = new_node;
	else{
		struct node *current = head;
		/* Move the list till end */
		while(current->next != NULL)
			current = current->next;
		/* Add the new node into list */
		current->next = new_node;
	}

	return head;	
}
