#include "simpleshell.h"

/**
* run - func create a child proccess with an exec
* @args: arguments
* Return: (1)
*
*/

extern char** environ;

int run(char **args)
{
	int status;
	pid_t pid;
	pid_t wait_for_child;
	/*char *buffer = tokens(args);*/
	char *buffer = _getenv("PATH");
	char *path;
	char *cp;
	char *new;
	/* creating a child processes */
	pid = fork();
	if (pid == 0)
	{
		while (buffer != NULL)
		{
			path = strtok(buffer, ":");
			cp = _strcat("/", args);
			new = _strcat(path, cp);
			path = strtok(NULL, ":");
			if (access(new, (R_OK | X_OK)) == 0)
				execve(new, args, environ);
		}
	}
	else
	{
		wait_for_child = waitpid(pid, &status, 0);
	}

	return (1);
}

/**
* execute - function to execute the run commands and builtins
* @args: arguments
* Return: run function
*
*/

int execute(char **args)
{
	return (run(args));
}

/*int main(char **args)
{
	printf("$ \n");

	return (run(args));

}*/
