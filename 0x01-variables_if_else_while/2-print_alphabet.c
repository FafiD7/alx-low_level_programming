#include <stdio.h>
/**
 * main - A function that print the alphabet in lowercase
 * @a: an input character
 *
 * Retuen: Always 0
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
