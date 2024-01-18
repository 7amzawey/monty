#include "monty.h"
/**
 * push - this function pushs an element to the stack
 * @stack: is the double pointer to hte head of the stack
 * @line_number: line number
 * @n: value to add to the new node
 */
void push(stack_t **stack, unsigned int line_number, const char *n)
{
	stack_t *new;
	int num, i;
	for (i = 0; n[i]; i++)
	{
		if (isdigit(n[i]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	num = atoi(n);
	new = malloc(sizeof(stack_t));

	if (!new)
	{
		fprintf(stderr, "Eroor: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = num;
	new->prev = NULL;
	new->next = *stack;
	if (*stack)
		(*stack)->prev = new;
	*stack = new;
}
/**
 * pall - prints all the elements
 * @stack: is a double pointer to the head of the stack
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;
	
	while (temp != NULL)
	{
	printf("%d\n", temp->n);
	temp = temp->next;
	}
}
