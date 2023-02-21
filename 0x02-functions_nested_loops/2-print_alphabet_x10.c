#include "main.h"
/**
 * print_alphabet_x10 - A function that print ten times the alphabet
 *
 * Return: always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char i, j;

	j = 0;
	while (j < 10)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar (i);
		}
		j++;
			_putchar('\n');
	}
}

