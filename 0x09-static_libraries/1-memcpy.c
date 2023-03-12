#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @n: number of bytes
 * @src: memory area
 * @dest: memory area
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
