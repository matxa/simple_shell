#include "simpleshell.h"

char *user_input(void)
{
	char *buffer = NULL;
	size_t bsize = 0;
	/* check for get line */
	int count_char;

	count_char = getline(&buffer, &bsize, stdin);
	if (count_char == -1)
		perror("getline() failed ( count_char == -1 )");

	/* count_char = _getline(&buffer); */

	return (buffer);
}
