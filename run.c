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
	int i;
	/*char *buffer = tokens(args);*/
	char *buffer = _getenv("PATH");
	char *path = malloc(sizeof(char) * 1024);
	char *cp = malloc(sizeof(char) * 1024);
	char *new = malloc(sizeof(char) * 1024);
	/* creating a child processes */
	printf("args -> %s\n", *args);
	printf("buffer -> %s\n", buffer);

	pid = fork();
	if (pid == 0)
	{
		path = strtok(buffer, ":");
		printf("path -> %s\n", path);
		printf("%s\n", "forking");
		/*cp = strcat(*args, "/");
		printf("cp -> %s <- the slash\n", cp);*/
		while (path)
		{
			cp = strcat("/", *args);
			printf("cp -> %s <- the slash\n", cp);
			printf("%s\n", "we in the while loop :)");
			new = strcat(path, cp);
			printf("new -> %s\n", new);

			if (access(new, (R_OK | X_OK)) == 0)
			{
				printf("%s\n", "exec");
				execve(new, args, environ);
			}
			path = strtok(NULL, ":");
			i++;
			printf("the loop runs %d times!", i);
		}
	}
	else
	{
		printf("%s\n", "we in the parent process :)");
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
