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
	unsigned int line_number = 1;
	stack_t *stack = NULL;

	if (argc != 2)
		error_argc();
	file = fopen(argv[1], "r");

	if (file == NULL)
		error_open(argv[1]);
	while ((bytes = getline(&line, &len, file)) != -1)
	{
		char *instruction;
		char *opcode;
		char *argument;

		if (line[0] == '#')
			continue;
		instruction = strtok(line, ";");
		while (instruction != NULL)
		{
			opcode = strtok(instruction, " \n\t\r");
			argument = strtok(NULL, " \n\t\r");
			if (opcode != NULL)
				cases(&stack, line_number, opcode, argument);
			instruction = strtok(NULL, ";");
			line_number++;
		}
	}
	while (stack != NULL)
	{
		pop(&stack);
	}
	free(line);
	fclose(file);
	return (EXIT_SUCCESS);
}
