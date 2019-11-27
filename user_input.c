#include "simpleshell.h"
/**
 * user_input - gets user input and send to stdin
 * Return: buffer, pointer
 */
char *user_input(void)
{
	char *buffer = NULL;
	size_t bsize = 0;
	int count_char;

	count_char = getline(&buffer, &bsize, stdin);
	if (count_char == EOF)
		exit(0);
	return (buffer);
}
