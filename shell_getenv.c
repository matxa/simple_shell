#include "simpleshell.h"

/**
* _getenv - get enviromental variables
* @var_name: enviromental var to get
* Return: char*
*
*/

extern char** environ;

char *_getenv(char *var_name)
{
	char **env;
	char *char_p;
	char *namep;

	for (env = environ; *env != NULL; env++)
	{
		for (char_p = *env, namep = var_name; *char_p == *namep; char_p++, namep++)
		{
			if (*char_p == '=')
			{
				break;
			}
		}
		if ((*char_p == '='))
		{
			return (char_p + 1);
		}
	}
	return (NULL);
}

