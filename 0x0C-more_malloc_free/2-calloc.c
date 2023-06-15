#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: an integer
 * @size: a size of integer
 *
 * Return: always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	s = malloc(j);
	if (s == NULL)
		return (NULL);
	while (i < j)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
