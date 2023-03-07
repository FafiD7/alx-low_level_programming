#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: an input string
 * @accept: an input
 *
 * Return: 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
