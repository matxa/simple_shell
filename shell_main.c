#include "simpleshell.h"

/**
* main - main shell function, where the magic happens
* takes in no arg
* Return: return (0) on success
*/

int main(void)
{
	/* the dollar :)*/
	char *prompt = "$ ";

	char *buffer;
	char **cmd;

	while (1)
	{
		write(1, prompt, (sizeof(char) * 2));
		buffer = user_input();
		cmd = tokens(buffer);
		run(cmd);

		free(buffer);
		free(cmd);
	}
}
