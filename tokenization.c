#include "monty.h"
/**
 * token - tokenizing an INTIRE LINE
 * @line: is the line that it's elements will be tokneized.
 * Return: an array of tokenized elements.
 */
char **token(char *line)
{
	int i = 0;
	char **instructions = malloc(128 * sizeof(char *));

	if (instructions == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	instructions[i] = strtok(line, ";+");
	while (instructions[i] != NULL)
	{
		i++;
		instructions[i] = strtok(NULL, ";+");
	}
	return (instructions);
}
