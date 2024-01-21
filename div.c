#include "monty.h"
/**
 * div - divides the top 2nd elment on the first
 * @stack: is the stack.
 * @line_number: is the line_number.
 * Return: 0 on success.
 */
int div(stack_t **stack, int line_number)
{
	int n;
	stack_t *temp;

	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->next->n / (*stack)->n;
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	if (*stack != NULL)
		*stack->prev == NULL;
	return (0);
}
