#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack, followed by
 * a new line.
 * @stack: is the doubly linked list aka stack
 * Return: 0 on success.
 */
int pstr(stack_t **stack)
{

if (!(((*stack)->n >= 97 && (*stack)->n <= 122) ||
			((*stack)->n >= 65 && (*stack)->n <= 90)))
{
	exit(EXIT_FAILURE);
}
if (*stack == NULL)
{
	printf("\n");
	exit(EXIT_FAILURE);
}
while (*stack != NULL)
{
if (!(((*stack)->n >= 97 && (*stack)->n <= 122) ||
			((*stack)->n >= 65 && (*stack)->n <= 90)))
{
	printf("\n");
	exit(EXIT_FAILURE);
}
if ((*stack)->n == 0)
{
	printf("\n");
	exit(EXIT_FAILURE);
}
printf("%c", (*stack)->n);
*stack = (*stack)->next;
}
printf("\n");
return (0);
}
