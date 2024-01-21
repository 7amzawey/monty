#include "monty.h"
/**
 * pchar - prints the char at the top of the stack, followed by a new line
 * @stack: is the doubly linked list aka stack
 * @line_number: is the line number.
 * Return: 0 on success.
 */
int pchar(stack_t **stack, int line_number)
{

if (!(((*stack)->n >= 97 && (*stack)->n <= 122) ||
			((*stack)->n >= 65 && (*stack)->n <= 90)))
{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
	exit(EXIT_FAILURE);
}
if (*stack == NULL)
{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
printf("%c\n", (*stack)->n);
return (0);
}
