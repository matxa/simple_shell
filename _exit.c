#include "shell_main.h"
/**
 * _exit - exits process
 * @argc: prompt number
 * @argv: prompt vector
 * return: some return
 */
void _exit(int argc, char **argv)
{
	if (argv[0] == "exit")
	{
		free(argv);
		exit(EXIT_SUCCESS);
	}
	if !(EXIT_SUCCESS)
	{
		return (-1);
	}
}
