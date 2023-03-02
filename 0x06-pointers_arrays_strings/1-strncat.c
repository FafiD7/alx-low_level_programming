#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @src: the source string
 * @dest: destnation string
 * @n: the number of charcter to be append
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int a;

	for (a = 0; dest[a] != '\0'; a++)
		destlen++;
	for (a = 0; src[a] != '\0'; a++)
		srclen++;
	for (a = 0; a < n; a++)
		dest[destlen + a] = src[a];
	return (dest);
}
