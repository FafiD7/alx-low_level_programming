#include <stdio.h>
/**
 * main - A function that print the alphabet in lowercase
 *
 * Retuen: Always 0 (Success)
 */

int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
		putchar('\n');
		return (0);
}
