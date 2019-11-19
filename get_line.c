#include "simpleshell.h"

/**
* _getline - getline func implimentation
* @buff: buffer to hold the input
* @size: size of buffer
* Return: the size of chars read
*
*/

ssize_t _getline(char **buff)
{
	if (buff == NULL)
		return (-1);

	/* buffer to realloc */
	/* char **buff_realloc; */
	/* size of buffer (buff) */
	size_t buff_size = 4096;
	/* the number of bytes read is returned */
	ssize_t read_size;
	/* malloc for buffer */
	*buff = malloc(buff_size);
	/* check if malloc was successful */
	/*if (buff == NULL)
	{
		perror("failed to malloc");
		return (-1);
	}*/
	read_size = read(0, *buff, buff_size);
	/* check for read */
	if (read_size == -1)
	{
		perror("read failed");
		return (-1);
	}
	/* realloc in case we need more momory */
	/*if ((read_size + 1) < buff_size)
	{
		*buff_realloc = _realloc(*buff, *size, buff_size);
		if (buff_realloc == NULL)
			return (-1);
		*buff = *buff_realloc;
		*size = buff_size;
	}*/

	return (read_size);
}
