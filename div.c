#include "monty.h"
/**
 * _div - divides the top two elements of the stack.
 * @head: stack head
 * @count: line_number
*/
void _div(stack_t **head, unsigned int count)
{
	stack_t *ptr;
	int len = 0, temp;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(files.file);
		free(files.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	if (ptr->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(files.file);
		free(files.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	temp = ptr->next->n / ptr->n;
	ptr->next->n = temp;
	*head = ptr->next;
	free(ptr);
}
