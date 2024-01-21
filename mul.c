#include "monty.h"
/**
 * mul - multiplies the top elements of the stack to the 2nd element
 * @stack: is the doubly linked list
 * @line_number: is the line number.
 * Return: 0 on success.
 */
int mul(stack_t **stack, int line_number)
{
	int n;
	stack_t *temp;

	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->next->n * (*stack)->n;
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	if (*stack != NULL)
		(*stack)->prev = NULL;
	(*stack)->n = n;
	return (0);
}
