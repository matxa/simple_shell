#include "simpleshell.h"

ssize_t _getline(char **buff)
{
	size_t buff_size = 4096;
	ssize_t read_size = 0;

	*buff = malloc(buff_size);	
	read_size = read(0, *buff, buff_size);
	return read_size;
}


/**
* get_user_input - uses getline() to get user input
* Return: getlines returns
*
*/

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

int main(void)
{
	char *buffer;

	buffer = user_input();
	printf("Your input: %s\n", buffer);

	free(buffer);
	return (0);
}
