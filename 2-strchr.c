#include "simpleshell.h"

/**
 **_strchr - finds and return char
 *@s: pointer
 *@c: int var
 *Return: (s)
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
