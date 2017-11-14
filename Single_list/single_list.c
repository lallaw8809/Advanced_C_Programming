/***********************************************
 * Program for Single linked lsit
 *
 * Author : Lal Bosco Lawrence
 * Date   : 04-Nov-2017
 ************************************************/
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

/* Function Declaration */
struct node *add_front(struct node *head);
struct node *add_end(struct node *head);
struct node *add_middle(struct node *head);
void display(struct node* head);

int main()
{
	struct node *head = NULL;
	int choice;

	while(1)
	{
		printf("\nEnter the choice\n");
		printf("1.Display the List\n");
		printf("2.Create a node at front\n");
		printf("3.Create a node at middle\n");
		printf("4.Create a node at end\n");
		printf("5.Delete a node from front\n");
		printf("6.Delete a node from middle\n");
		printf("7.Delete a node from end\n");
		printf("8.Reverse the List\n");
		printf("9.Terminate\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: //Display list on the terminal
				display(head);
				break;

			case 2://Add the node at front
				head = add_front(head);
				break;
			case 3://Add the node at front
				head = add_middle(head);
				break;
			case 4:
				head = add_end(head);
				break;

			case 9:
				exit(-1);

			default:
				printf("Invalid option\n");
				break;
		}
		
	}

	return 0;
} 

struct node* create_node()
{
	int data;

	/* Allocating a memory for new node */
	struct node *create = (struct node *)malloc(sizeof(struct node));
	if(create == NULL) //Validation of allocation
	{
		printf("Unable to allocate a memory for new node\n");
		exit(-1);
	}

	/* Add the data into the List */	
	printf("\nEnter the data to add front\n");
	scanf("%d",&create->data);

	return create;
}

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

/********************************************************************
 *Brief     : Add the node into list at front
 *Arg(head) : holds the List
 *Return    : List [New node has been added ]
*********************************************************************/
struct node *add_front(struct node *head)
{
	/* Create a new node */
	struct node *new_node = create_node();
	/* Add the new node into list */
	new_node->next = head;

	return new_node;
}

/********************************************************************
 *Brief     : Add the node into list at end
 *Arg(head) : holds the List
 *Return    : List [New node has been added ]
*********************************************************************/
struct node *add_end(struct node *head)
{
	/* Create a new node */
	struct node *new_node = create_node();
	new_node->next = NULL;

	/* Validation of List */
	if(head == NULL)
		head = new_node;
	else
	{
		struct node *current = head;
		/* Move the list till end */
		while(current->next != NULL)
			current = current->next;
		/* Add the new node into list */
		current->next = new_node;
	}

	return head;	
}

struct node *add_middle(struct node *head)
{
	/* Create a new node */
	struct node *new_node = create_node();
	new_node->next = NULL;
	
	struct node *single_move = head;
	struct node *double_move = head;

	if(head == NULL)
		return new_node;
	else
		while(double_move != NULL){
			single_move = single->next;
			double_move = double_move->next->next;
		}		

}






