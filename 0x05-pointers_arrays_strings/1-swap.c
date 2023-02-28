#include "main.h"
/**
 * swap_int - A function that swaps the values of two integers.
 * @a: an input integer
 * @b: an input integer
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
