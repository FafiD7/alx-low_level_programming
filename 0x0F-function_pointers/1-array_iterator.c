#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given as a parameter.
 * @size: size of an array
 * @action: a pointer to function
 * @array: a pointer to integer
 *
 * Return: always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
