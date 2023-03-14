#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - a function that locates a substring.
 * @haystack: a string
 * @needle: a substring
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;

	a = strstr(haystack, needle);
	return (a);
}
