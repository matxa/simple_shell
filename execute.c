#include "simpleshell.h"
/**
 * _exit - exits process
 * @argc: prompt number
 * @argv: prompt vector
 * return: some return
 */
int _exit(char **argv)
{
	free(*argv);
	free(argv);
	exit(EXIT_SUCCESS);
	return (1);
}
/**
 * _execute - filters if builtin or not
 * Return: run(cmd)
 */
int _execute(char **args)
{
	int type;
	char *cmd[] = {"env", "exit", NULL};
	
	if (args[0] == NULL)
		return (1);
	/* filter */
	while (cmd[type] != NULL)
	{
		if(_strcmp(cmds[type], args[0]) == 0)
			break;
		type++;
	}
	/* call to cmds */
	switch (type)
	{
		case 0:
			_exit(args);
}
