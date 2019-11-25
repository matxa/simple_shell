#include "simpleshell.h"

/**
* run - func create a child proccess with an exec
*
*
*
*/

int run(char **args)
{
	int status;
	pid_t pid;
	pid_t wait_for_child;


	/* creating a child processes */
	pid = fork();
	if (pid == 0)
	{
		execve("/bin/", args, NULL);
	}
	else
	{
		wait_for_child = waitpid(pid, &status, 0);
	}

	return (1);
}

int execute(char **args)
{
	return (run(args));
}
/*int main(char **args)
{
	printf("$ \n");

	return (run(args));

}*/
