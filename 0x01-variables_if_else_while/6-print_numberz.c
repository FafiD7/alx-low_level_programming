#include <stdio.h>
/**
 * main - Print all the single digit numbers of base 10.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);

}
