#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @stack: the stack
 * Return: 0 in success.
 */
int pop(stack_t **stack)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L<line_number>: can't pop an empty stack");
		exit(EXIT_FAILURE);
	}
	(*stack) = (*stack)->next;
	if ((*stack) != NULL)
		(*stack)->prev = NULL;
	return (0);
}
