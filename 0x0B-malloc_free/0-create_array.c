#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char.
 * @size: the size of an array
 * @c: an input character
 *
 * Return: 0.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
