#include "monty.h"
#include <stdio.h>
/**
 * main - the entry point
 * @argc: the number of arguments
 * @argv: the argument vector
 * Return: 0 & 1
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t bytes;
	stack_t *stack = NULL;
	unsigned int line_number = 1;

	if (argc != 2)
		error_argc();
	file = fopen(argv[1], "r");

	if (file == NULL)
		error_open(argv[1]);
	while ((bytes = getline(&line, &len, file)) != -1)
	{
		char *opcode, *argument;

		opcode = strtok(line, " \n\t\r");
		argument = strtok(NULL, " \n\t\r");

		if (opcode == NULL)
			continue;
		if (strcmp(opcode, "push") == 0)
			if (argument == NULL)
				error_push(line_number);
			else
				push(&stack, line_number, argument);
		else if (strcmp(opcode, "pall") == 0)
			pall(&stack, line_number);
		else
			error_inst(line_number, opcode);
		line_number++;
	}
	free(line);
	fclose(file);
	return (EXIT_SUCCESS);
}
