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
	printf("token -> %s\n", token);
	for (i = 0; token != NULL; i++)
	{
		hold_tokens[i] = token;
		printf("hold_tokens[%d] -> %s\n", i, hold_tokens[i]);
		token = strtok(NULL, " ");
		printf("next token -> %s\n", token);
	}

	hold_tokens[i] == NULL;
	printf("last ld_tokens -> %s\n", hold_tokens[i]);
	return (hold_tokens);
}

/*int main(void)
{
	char *buffer;
	char **cmd;
	int i;

	buffer = user_input();
	printf("buffer -> %s\n", buffer);
	cmd = tokens(buffer);

	for (i = 0; i < cmd[i + 1]; i++)
	{
		printf("cmd[%d] -> %s\n", i, cmd[i]);
		break;
	}
	return (1);
}*/
