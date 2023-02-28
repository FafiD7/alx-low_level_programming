#include "main.h"
/**
 * puts2 - A function that prints every other character of a string.
 * @str: a string
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int a = 0;
	int b = 0;
	char *x = str;
	int y;

	while (*x != '\0')
	{
		x++;
		a++;
	}
	b = a - 1;
	for (y = 0; y <= b; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
