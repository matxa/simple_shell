#include "simpleshell.h"

void _cmdfinder(char **path_t, char **user_t)
{
	char *buffer = _getenv('PATH');
	char *path;
	char cp, new;

	while (path != NULL)
	{
		path = strtok(path_t, ":");
		cp = _strcat('/', user_t);
		new = _strcat(path_t, user_t);
		if (access(new, (R_OK | X_OK)) == 0);
		execve(new, user_t, environ);
	}
}
