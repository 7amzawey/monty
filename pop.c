#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @stack: the stack
 * Return: 0 in success.
 */
int pop(stack_t **stack)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L<line_number>: can't pop an empty stack");
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	(*stack) = (*stack)->next;
	if ((*stack) != NULL)
		(*stack)->prev = NULL;
	free(temp);
	return (0);
}
