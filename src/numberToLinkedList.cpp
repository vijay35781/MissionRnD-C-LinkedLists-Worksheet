/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *newnode, *head = NULL;
	int r;
	if (N < 0)
		N = -N;
	if (N == 0)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->num = N;
		newnode->next = NULL;
		head = newnode;
		return head;
	}
	

	
		while (N > 0)
		{
			r = N % 10;
			newnode = (struct node *)malloc(sizeof(struct node));
			newnode->num = r;
			newnode->next = NULL;
			if (head != NULL)
				newnode->next = head;
			head = newnode;
			N = N / 10;
		}
		return head;
	}
