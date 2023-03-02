#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array.
 * @a: an array
 * @n: number of elements of array
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
