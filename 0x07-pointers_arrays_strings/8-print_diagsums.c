#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: an input integer
 * @size: an input
 *
 * Return: 0.
 */

void print_diagsums(int *a, int size)
{
	int i, b, c;

	i = 0;
	b = 0;
	for (c = 0; c < size; c++)
	{
		i = i + a[c * size + c];
	}
	for (c = size - 1; c >= 0; c--)
	{
		b += a[c * size + (size - c - 1)];
	}
	printf("%d, %d\n", i, b);
}
