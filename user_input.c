#include "simpleshell.h"

char *user_input(void)
{
	ssize_t count_char;
	int i;
	size_t bsize = 1024;
	char *buffer;
/*
	buffer = malloc(sizeof(char)* bsize);
	if (buffer == NULL)
	{
		perror("failed to allocate buffer");
		exit(1);
	}
	count_char = getline(&buffer, &bsize, stdin);
*/
	count_char = _getline(&buffer);
	return (buffer);
}

/*
int main(void)
{
	char *buffer;

	buffer = user_input();
	write(1, buffer, sizeof(buffer));

	free(buffer);
	return (0);
}
*/
