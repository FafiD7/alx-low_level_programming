#include "main.h"
/**
 * puts_half - a function that prints half of a string.
 * @str: a string
 *
 * Return: half of a string.
 */

void puts_half(char *str)
{
	int a, n, c;

	c = 0;
	for (a = 0; str[a] != '\0'; a++)
		c++;
	n = (c / 2);
	if ((c % 2) == 1)
		n = ((c + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
