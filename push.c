#include "monty.h"
/**
 * push - add node to the stack
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void push(stack_t **head, unsigned int count)
{
	int n, i = 0, flag = 0;

	if (files.arg)
	{
		if (files.arg[0] == '-')
			i++;
		for (; files.arg[i] != '\0'; i++)
		{
			if (files.arg[i] > 57 || files.arg[i] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(files.file);
			free(files.content);
			freestack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(files.file);
		free(files.content);
		freestack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(files.arg);
	if (files.lifi == 0)
		add_node(head, n);
	else
		add_queue(head, n);
}
