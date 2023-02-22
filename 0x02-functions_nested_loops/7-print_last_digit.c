#include "main.h"
/**
 * print_last_digit - A function that print a last digit
 * @a: input of an intiger
 *
 * Return: value of the last digit
 */

int print_last_digit(int a)
{
	int b;

	b = (a % 10);
		if (b < 0)
		{
			b = -(b);
		}
		_putchar(b + '0');
		return (b);
}
