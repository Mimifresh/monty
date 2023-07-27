#include "monty.h"
/**
* freestack - frees a doubly linked list
* @head: head of the stack
*/
void freestack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
