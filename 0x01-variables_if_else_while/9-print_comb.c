#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit.
 *
 * Return: 0 (Succes).
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
