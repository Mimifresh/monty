#include "monty.h"
/**
  *sub- sustration
  *@head: stack head
  *@count: line_number
 */
void sub(stack_t **head, unsigned int count)
{
	stack_t *temp;
	int value, nodes;

	temp = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(files.file);
		free(files.content);
		freestack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	value = temp->next->n - temp->n;
	temp->next->n = value;
	*head = temp->next;
	free(temp);
}
