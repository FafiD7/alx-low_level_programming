#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: the string to be measured
 *
 * Return: 0.
 */

int _strlen_recursion(char *s)
{
	int  l = 0;

	if (*s)
	{
		l = _strlen_recursion(s + 1);
		l++;
	}
	return (l);
}
