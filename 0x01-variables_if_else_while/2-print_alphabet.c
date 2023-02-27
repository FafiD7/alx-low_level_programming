#include <stdio.h>
/**
 * main - A function that print the alphabet in lowercase
 *
 * Retuen: Always 0
 */

int main(void)
{
	int a;

	for (a >= 97 && a <= 122; a; a++)
	{
		putchar(a);
		a++;
	}
		putchar('\n');
		return (0);
}
