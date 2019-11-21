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
	int stat;

	while (1)
	{
		write(1, prompt, (sizeof(char) * 2));
		buffer = user_input();
		cmd = tokens(buffer);
		stat = execute(run(cmd));

		free(buffer);
		free(cmd);
	}
}
