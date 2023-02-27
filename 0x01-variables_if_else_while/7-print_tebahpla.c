#include <stdio.h>
/**
 * main - Print the lowercase alphbet in reverse.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
