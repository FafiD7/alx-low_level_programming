#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: a pointer
 * @old_size: an integer
 * @new_size: an integer
 *
 * Return: always 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		n = malloc(new_size);
		if (n == NULL)
			return (n);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
		n = malloc(new_size);
		if (n == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
		{
			n[i] = ((char *) ptr)[i];
		}
		free(ptr);
		return (n);
}
