#include "simpleshell.h"
/**
 * _strlen - print length of string
 * @s: string
 * Return: void
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{

		count++;

	}
	return (count);
}
