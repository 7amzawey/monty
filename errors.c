#include "monty.h"
/**
 * error_argc - handles arg error
 * Return: Nothing
 */
int error_argc(void)
{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
}
/**
 * error_open - handles file opening errors
 * @argument: is the file
 * Return: nothing
 */
int error_open(char *argument)
{
		fprintf(stderr, "Error: Can't open file %s\n"r argument);
		exit(EXIT_FAILURE);
}
/**
 * error_push - handles push errors
 * @line_number: is the line number
 * Return: Nothing
 */
int error_push(int line_number)
{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
}
/**
 * error_inst - handles insturctions errors
 * @line_number: is the line number.
 * @opcode: is the opcode.
 * Return: Nothing
 */
int error_inst(int line_number, char *opcode)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
