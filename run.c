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
	int status, i;
	pid_t pid;
	/*char *buffer = tokens(args);*/
	char *buffer = _getenv("PATH");
	char *path = malloc(sizeof(char) * 1024);
	char *cp = malloc(sizeof(char) * 1024);
	char *new = malloc(sizeof(char) * 1024);
	/* creating a child processes */

	pid = fork();
	if (pid == 0)
	{
		path = strtok(buffer, ":");
		/*cp = strcat(*args, "/");
		printf("cp -> %s <- the slash\n", cp);*/
		cp = str_concat("/", *args);
		while (path)
		{
			new = str_concat(path, cp);
			printf("new -> [%s]\n", new);
			for (i = 0; args[i]; i++)
			{
				printf("args[%d] -> [%s]\n",i,args[i]);
			}
			if ((access(new, X_OK || R_OK)) == 0)
			{
				printf("%s", "execve");
				execve(new, args, environ);
				break;
			}
			path = strtok(NULL, ":");
		}
		free(args);
	}
	printf("%s\n", "we in the parent process :)");
	waitpid(pid, &status, 0);
	return (1);
}

/**
* execute - function to execute the run commands and builtins
* @args: arguments
* Return: run function
*
*/

/*int execute(char **args)
{
	return (run(args));
}
*/
/*int main(char **args)
{
	printf("$ \n");

	return (run(args));

}*/
