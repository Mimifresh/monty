#include "monty.h"
/**
 * mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @count: line_number
*/
void mul(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(files.file);
		free(files.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	temp = ptr->next->n * ptr->n;
	ptr->next->n = temp;
	*head = ptr->next;
	free(ptr);
}
