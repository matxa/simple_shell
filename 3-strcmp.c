#include "simpleshell.h"

/**
 *_strcmp - shows the pointer of the var
 *@s2: var for p
 *@s1: p
 *Return: equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int equal = 0;

	for (i = 0; (*(s1 + i) || *(s2 + i)) && !equal; i++)
	{
		if (*(s1 + i) != *(s2 + i))
			equal = *(s1 + i) - *(s2 + i);
	}
	return (equal);
}
