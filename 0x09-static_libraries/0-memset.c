#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @n: number of bytes
 * @s: a pointer
 * @b: the desired value
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
