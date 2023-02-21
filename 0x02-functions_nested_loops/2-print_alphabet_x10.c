#include "main.h"
/**
 * main-A function that prints ten times the alphabet 
 *
 * Return: x10 a-z (Success)
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

