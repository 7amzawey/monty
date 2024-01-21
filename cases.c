#include "monty.h"
/**
 * cases - the different opcodes
 * @stack: the doubley linked list aka stack
 * @line_number: is the line number
 * @opcode: is the opcode.
 * @argument: is the argument.
 */
void cases(stack_t **stack, int line_number, char *opcode, char *argument)
{
	if (strcmp(opcode, "push") == 0)
		push(stack, line_number, argument);
	else if (strcmp(opcode, "pall") == 0)
		pall(stack, line_number);
	else if (strcmp(opcode, "pint") == 0)
		pint(stack);
	else if (strcmp(opcode, "pop") == 0)
		pop(stack);
	else if (strcmp(opcode, "add") == 0)
		add(stack, line_number);
	else if (strcmp(opcode, "swap") == 0)
		swap(stack);
	else if (strcmp(opcode, "nop") == 0)
		nop(stack, line_number);
	else if (strcmp(opcode, "sub") == 0)
		sub(stack, line_number);
	else
		error_inst(line_number, opcode);
}
