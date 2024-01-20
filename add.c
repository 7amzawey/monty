#include "monty.h"
/**
 * add - adds the top two elements
 * @stack: is the doubly linked list aka stack
 * Return: 0 on success.
 */
int add(stack_t **stack)
{
	int n;

	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L<line_number>: can't add, stack too short");
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n + (*stack)->next->n;

	(*stack) = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	(*stack)->n = n;
	return (0);
}
