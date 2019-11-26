#include "simpleshell.h"
/**
 * shell_exit - exits process
 * @argv: prompt vector
 * Return: some return
 */
void shell_exit(char **argv)
{
	free(argv);
	exit(EXIT_SUCCESS);
}
/**
* main - main shell function, where the magic happens
* takes in no arg
* Return: return (0) on success
*/
int main(int ac, char **arg)
{
	char *prompt = "$ ";
	char *buffer;
	char **cmd;
	(void) (ac);

	while (1)
	{
		write(1, prompt, (sizeof(char) * 2));
		buffer = user_input();
		cmd = tokens(buffer);
		run(cmd);

		free(buffer);
		free(cmd);
	}
	while (arg != NULL)
		if (_strcmp(*arg, "exit") == 0)
			shell_exit(cmd);
}
