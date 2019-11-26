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
 * _execute - filters if builtin or not
 * @args: user input
 * Return: run(cmd)
 */
int _execute(char **args)
{
	int type;
	char *cmd[4] = {"", "env", "exit", NULL};

	type = 0;
	if (args[type] == NULL)
		return (1);
	/* filter */
	while (cmd[type] != NULL)
	{
		if (_strcmp(cmd[type], args[0]) == 0)
			break;
		type++;
	}
	/* call to cmds */
	switch (type)
	{
		case (1):
			_getenv(*args);		
			break;
		case (2):
			shell_exit(args);
			break;
		default:
			run(args);
			break;
	}
	return (type);
}
