#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string to be concatenate
 * @s2: string to be concatenate
 * n: an integer
 *
 * Return; always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, h = 0, g = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[h])
		h++;
	if (n >= h)
		g = i + h;
	else
		g = i + n;
	c = malloc(sizeof(char) * g + 1);
	if (c == NULL)
		return (NULL);
	h = 0;
	while ( j < g)
	{
		if (j <= i)
			c[j] = s1[j];
		if (j >= i)
		{
			c[j] = s2[h];
			h++;
		}
		j++;
	}
	c[j] = '\0';
	return (c);
}
