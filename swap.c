#include "monty.h"
/**
 * swap - swaps the top two elements of a stack
 * @stack: its a doubly linked list
 * Return: 0 on success.
 */
int swap(stack_t **stack)
{
	stack_t *temp;
	int n;

	temp = *stack;

	if ((temp)->next == NULL)
	{
		fprintf(stderr, "L<line_number>: can't swap, stack too short");
		free(temp);
		exit(EXIT_FAILURE);
	}
	n = (temp)->n;
	(temp)->n = (temp)->next->n;
	(temp)->next->n = n;
	return (0);
}
