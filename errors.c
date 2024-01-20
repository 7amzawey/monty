#include "monty.h"
int error_argc(void)
{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
}
int error_open(void)
{	
		fprintf(stderr, "Error:can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
}
int error_push(void)
{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
}
int error_inst(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
