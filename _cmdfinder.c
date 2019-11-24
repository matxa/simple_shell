#include "simpleshell.h"

void _cmdfinder(char **path_t, char **user_t)
{
	char *buffer = _getenv('PATH');
	char *path;
	char cp, new;

	while (buffer == 0)
	{
		path = strtok(path_t, ":");
		cp = _strcat('/', user_t);
		new = _strcat(path_t, user_t);
		if (access(new, F_OK) == 0);
		execve(new, user_t, environ);
	}
}
