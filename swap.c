#include "monty.h"
/**
 * swap - swaps the top two elements of a stack
 * @stack: its a doubly linked list
 * Return: 0 on success.
 */
int swap(stack_t **stack)
{
	int n;

	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L<line_number>: can't swap, stack too short");
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = n;
	return (0);
}
