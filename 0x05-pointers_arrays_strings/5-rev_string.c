#include"main.h"
/**
 * rev_string -  A function that reverses a string.
 * @s: a string
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int b;

	while (s[c] != '\0')
		c++;
	for (b = 0; b < c; b++)
	{
		c--;
		rev = s[b];
		s[b] = s[c];
		s[c] = rev;
	}
}
