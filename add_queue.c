#include "monty.h"
/**
 * queue - prints the top
 * @head: stack head
 * @count: line_number
*/
void queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	files.lifi = 1;
}

/**
 * add_queue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
*/
void add_queue(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}
