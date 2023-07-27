#include "monty.h"
/**
 * pop - prints the top
 * @head: stack head
 * @count: line_number
*/
void pop(stack_t **head, unsigned int count)
{
	stack_t *ptr;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(files.file);
		free(files.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	*head = ptr->next;
	free(ptr);
}
