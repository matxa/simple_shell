#include "simpleshell.h"

/**
 * _realloc - realloc func
 * @ptr: void ptr
 * @old_size: old
 * @new_size: new
 * Return: void func
 *
 */

void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
	/* create a new pointer where we will store the value of */
	/* the   the old pointer (ptr) */
	char *new_ptr;
	/*count - loop throught the index of each pointer to swap */
	/* values between them copy whats in (ptr) into (new_ptr) */
	size_t count;

	if (ptr == NULL)
	{
		/*if ptr is NULL set malloc for new_ptr*/
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	/* malloc for new_ptr */
	new_ptr = malloc(new_size);
	/* check if new_ptr was successfully allocated */
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	/* increment count while count is less then old_size and new_size */
	/* and copy whats inside of ptr to new_ptr */
	for (count = 0; count < old_size && count < new_size; count++)
	{
		new_ptr[count] = ((char *)ptr)[count];
	}
	/* don't forget to free ptr */
	free(ptr);
	return (new_ptr);
}
