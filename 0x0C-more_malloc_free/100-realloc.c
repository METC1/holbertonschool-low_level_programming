#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates memory block
 * @ptr: Pointer to memmory previusly allocated
 * @old_size: size of old memmory allocation
 * @new_size: size of new memmory block
 * Return: pointer to the new memmory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		newptr = malloc(new_size);
		for (i = 0; i <= old_size; i++)
		{
			newptr[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (newptr);
	}
	if (new_size < old_size)
	{
		newptr = malloc(new_size);
		for (i = 0; i <= new_size; i++)
		{
			newptr[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (newptr);
	}
	return (0);
}
