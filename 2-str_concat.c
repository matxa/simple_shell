#include "simpleshell.h"

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
	/* declare your variables */
	int len1 = 0, len2 = 0, count = 0, begs = 0;
	char *cat;

	/* check for empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* find length of strings */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	begs = len1 + len2 + 1;
	/* allocate memory for concatenated string */
	cat = malloc(begs * sizeof(char));
	/* malloc fail safe */
	if (cat == NULL)
		return (NULL);

	len2 = 0;

	/* duplicate s1 to cat */
	while (count < begs)
	{
		if (count < len1)
		{
			cat[count] = s1[count];
		}
		else
		{
			cat[count] = s2[len2];
			len2++;
		}
		count++;
	}
	cat[count] = '\0';
	return (cat);
}
