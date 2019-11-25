#include "simpleshell.h"
/**
 * _strcat - will concatenate two strings
 * @dest: destination string
 * @src: src string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int srci = 0;
	int countdest = _strlen(dest);

	while (src[srci] != '\0')
	{
		dest[countdest + srci] = src[srci];
		srci++;
	}

	dest[countdest + srci] = '\0';

	return (dest);
}
