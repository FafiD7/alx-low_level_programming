#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @src: the source string
 * @dest: destnation string
 * @n: number of string
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
