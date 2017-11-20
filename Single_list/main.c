/***********************************************
 * Program for Single linked lsit
 *
 * Author : Lal Bosco Lawrence
 * Date   : 04-Nov-2017
 ************************************************/
#include "main.h"

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
				/* Display list on the terminal */
				display(head);
				break;

			case 2:
				head = add_front(head);
				break;

			case 3:
				/* Add the node at front */
				head = add_middle(head);
				break;
			case 4:
				head = add_end(head);
				break;
			case 5:
				head = delete_front(head);
				break;
			case 7:
				head = delete_end(head);
				break;

			case 8:
				head = reverse(head);
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







