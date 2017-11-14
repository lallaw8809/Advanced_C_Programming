#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *create_front(struct node *head);
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
			case 1:
				display(head);
				break;

			case 2:
				head = create_front(head);
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
struct node *create_front(struct node *head)
{
	int data;
	/* Allocating a memory for new node */
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	if(new_node == NULL) //Validation of allocation
	{
		printf("Unable to allocate a memory for new node\n");
		exit(-1);
	}

	/* Feed the data into the new node */	
	printf("\nEnter the data to add front\n");
	scanf("%d",&new_node->data);
	/* Feed the address into the new node */
	new_node->next = head;

	return new_node;
}








