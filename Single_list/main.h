#ifndef SINGLE_LIST_H_   /* Include guard */
#define SINGLE_LIST_H_

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

/* Function Declaraation */
struct node *add_middle(struct node *head);
struct node *add_front(struct node *head);
struct node *add_end(struct node *head);
void display(struct node* head);

struct node
{
	int data;
	struct node *next;
};

#endif
