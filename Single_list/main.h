#ifndef SINGLE_LIST_H_   /* Include guard */
#define SINGLE_LIST_H_

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};

/* Function Declaraation */
void display(struct node* head);

struct node *add_middle(struct node *head);
struct node *add_front(struct node *head);
struct node *add_end(struct node *head);

struct node *delete_front(struct node *head);
struct node *delete_end(struct node *head);

struct node *reverse(struct node *head);




#endif
