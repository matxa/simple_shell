#include "simpleshell.h"


/**
* my_exit - exit func implementation
* @n: num to exit
* Return: exit
*
*/

int my_exit(int n)
{
	return (n);
}

/**
* my_cd - change directory
* @args: what dir to change to
* Return: 1
*/

int my_cd(char **args)
{
	if (args[1] == NULL)
		perror("No dir to cd to");
	else
		chdir(args[1]);

	return (1);
}
