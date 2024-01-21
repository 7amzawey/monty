#include "monty.h"
/**
 * sub - subtracts the top elements of the stack from the 2nd element
 * @stack: is the doubly linked list
 * @line_number: is the line number.
 * Return: 0 on success.
 */
int sub(stack_t **stack, int line_number)
{
	int n;
	stack_t *temp;

	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->next->n - (*stack)->n;
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	if (*stack != NULL)
		(*stack)->prev = NULL;
	(*stack)->n = n;
	return (0);
}
