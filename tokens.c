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
	int i = 0;

	hold_tokens = malloc(sizeof(char*) * buffer_size);
	if (hold_tokens == NULL)
		exit(-1);

	hold_tokens[i] = strtok(buffer, " \n");
	while (hold_tokens[i] != NULL)
	{
		i++;
		hold_tokens[i] = strtok(NULL, " \n");
	}
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
