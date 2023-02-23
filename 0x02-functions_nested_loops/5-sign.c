#include "main.h"
/**
 * print_sign - Check if the number
 * greater, equal or less than zero
 * @n: The input number as an integer
 *
 * Return: 1 is greater than  zero, 0 is zero
 * -1 is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
