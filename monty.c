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
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}	
	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error:can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}	
	while ((bytes = getline(&line, &len, file)) != -1)
	{
		char *opcode, *argument;
		opcode = strtok(line, " \n\t\r");
		argument = strtok(NULL, " \n\t\r");
		if (opcode == NULL)
			continue;
		if (strcmp(opcode, "push") == 0)
		{
			if (argument == NULL)
			{
				fprintf(stderr, "L%d: usage: push integer\n", line_number);
				exit(EXIT_FAILURE);
			}
			push(&stack, line_number, argument);
		}
		else if (strcmp(opcode, "pall") == 0)
		{
			pall(&stack, line_number);
		}
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			exit(EXIT_FAILURE);
		}
		line_number++;
	}
	free(line);
	fclose(file);
	return (EXIT_SUCCESS);
}
