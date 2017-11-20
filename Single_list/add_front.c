#include "single_list.h"

/********************************************************************
 *Brief     : Add the node into list at front
 *Arg(head) : holds the List
 *Return    : List [New node has been added ]
*********************************************************************/
struct node *add_front(struct node *head)
{
	/* Create a new node */
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	if(new_node == NULL) //Validation of allocation
	{
		printf("Unable to allocate a memory for new node\n");
		exit(-1);
	}

	/* Add the data into the List */	
	printf("\nEnter the data to add front\n");
	scanf("%d",&new_node->data);

	/* Add the new node into list */
	new_node->next = head;

	return new_node;
}


