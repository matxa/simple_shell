#include "simpleshell.h"

/**
* main - main shell function, where the magic happens
* takes in no arg
* Return: return (0) on success
*/

void main(void)
{
	/* the dollar :)*/
	char *prompt = "$ ";

	char *buffer;
	char **cmd;
	int i = 0;

	while (1)
	{
		write(1, prompt, (sizeof(char) * 2));
		buffer = user_input();
		printf("buffer -> %s\n", buffer);
		cmd = tokens(buffer);
		printf("cmd -> %s\n", *cmd);
		run(cmd);

		free(buffer);
		free(cmd);
	}
}
