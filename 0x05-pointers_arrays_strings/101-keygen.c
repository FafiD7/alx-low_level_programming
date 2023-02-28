#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
	int p[100];
	int i, b, c;

	b = 0;
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		p[i] = rand() % 78;
		b += (p[i] + '0');
		putchar(p[i] +  '0');
		if ((2772 - b) - '0' < 78)
		{
			c = 2772 - b - '0';
			b += c;
			putchar(c + '0');
			break;
		}
	}
	return (0);
}
