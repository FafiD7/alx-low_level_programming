#include "main.h"
/**
 * print_buffer - a function that prints a buffer.
 * @b: a pointer to  buffer
 * @size: size
 *
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int a, j, y;

	a = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		j = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (y = 0; y < 10; y++)
		{
			if (y < j)
				printf("%02x", *(b + a + y));
			else
				printf(" ");
			if (y % 2)
			{
				printf(" ");
			}
		}
		for (y = 0; y < j; y++)
		{
			int c = *(b + a + y);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}
