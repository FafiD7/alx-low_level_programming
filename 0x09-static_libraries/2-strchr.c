#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @c: an input character
 * @s: an input string
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
