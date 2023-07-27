#include "monty.h"
/**
 * pall - prints the stack
 * @head: stack head
 * @count: no used
*/
void pall(stack_t **head, unsigned int count)
{
	stack_t *ptr;
	(void)count;

	ptr = *head;
	if (ptr == NULL)
		return;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
