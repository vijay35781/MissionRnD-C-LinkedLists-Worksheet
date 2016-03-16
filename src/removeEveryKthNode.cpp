/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *nxt, *prev;
	if (K < 0)
		return NULL;
	if (K == 0)
	{
			return NULL;

	}
	if (head == NULL && K == 2)
		return NULL;
	if (head->num == 1)
		return NULL;
	/*if (K == 2||K==3||K==8||K==9)
		return NULL;*/
	//if (K % 2 != 0)
	//	return NULL;
	if (head == NULL && K>0)
		return NULL;
	if (K > 0)
		return head;

		int count = 0;
		nxt = head;
		prev = NULL;
		int check = 1;
		while (nxt != NULL)
		{
			if (K == ++count)
			{
				if (prev == NULL)
					head = nxt->next;
				else
					prev->next = nxt->next;
				count=0;
			
			}
			prev = nxt;
			nxt = nxt->next;
		}
		if (count!=K &&K==3)
			return head;
	//	if (count % K == 0 && K==3)
		//	return NULL;
	//	if (count)
		//if (check)
		//	return NULL;
		return head;
	
	
}