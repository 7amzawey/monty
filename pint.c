#include "monty.h"
/**
 * pint - prints the first element at the top of the stack
 * @stack: is the stack
 * Return: 0 on success.
 */
int pint(stack_t **stack)
{
	stack_t *temp = *stack;

	if (temp == NULL)
	{
		fprintf(stderr, "L<line_number>: can't pint, stack empty");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", temp->n);
	return (0);
}
