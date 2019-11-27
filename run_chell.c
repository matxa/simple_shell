#include "simpleshell.h"

/**
* run - func create a child proccess with an exec
* @args: arguments
* Return: (1)
*
*/


int run(char **args)
{
	pid_t pid;
	int status;
	char *buffer = _getenv("PATH");
	char *path = malloc(sizeof(char) * 1024);
	char *cp = malloc(sizeof(char) * 1024);
	char *new = malloc(sizeof(char) * 1024);

	pid = fork();
	if (pid == 0)
	{
		path = strtok(buffer, ":");
		cp = str_concat("/", *args);
		while (path)
		{
			if (_strchr(*args, '/') != NULL)
				execve(*args, args, environ);

			new = str_concat(path, cp);
			if ((access(new, X_OK || R_OK)) == 0)
			{
				execve(new, args, __environ);
				break;
			}
			path = strtok(NULL, ":");
		}
		free(args);
	}
	waitpid(pid, &status, 0);
	free(path);
	free(cp);
	free(new);
	return (1);
}
