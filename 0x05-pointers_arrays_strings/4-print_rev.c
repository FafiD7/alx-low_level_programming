#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse.
 * @s: string
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int n = 0;
	int m;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	s--;
	for (m = n; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
