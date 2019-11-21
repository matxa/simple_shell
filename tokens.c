#include "simpleshell.h"

/**
* tokens - puts tokens in an array
* @buffer: the line read from input
* Return: tokens
*/

char **tokens(char *buffer)
{
	int buffer_size = 1024;
	char **hold_tokens;
	char *token;
	int i;

	hold_tokens = malloc(sizeof(char*) * buffer_size);
	if (hold_tokens == NULL)
		exit(-1);

	token = strtok(buffer, " ");

	for (i = 0; token != NULL; i++)
	{
		hold_tokens[i] == token;

		token = strtok(NULL, " ");
	}

	hold_tokens[i] == NULL;

	return (hold_tokens);
}
