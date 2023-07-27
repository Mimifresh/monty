#include "monty.h"
/**
 * pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @count: line_number
*/
void pchar(stack_t **head, unsigned int count)
{
	stack_t *ptr;

	ptr = *head;
	if (!ptr)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(files.file);
		free(files.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	if (ptr->n > 127 || ptr->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(files.file);
		free(files.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ptr->n);
}
