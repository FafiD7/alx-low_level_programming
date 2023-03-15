#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: an input integer
 * @av: an array pointer
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, j = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			j++;
	}
	j += ac;
	s = malloc(sizeof(char) * j + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			s[r] = av[i][n];
			r++;
		}
		if (s[r] == '\0')
		{
			s[r++] = '\n';
		}
	}
	return (s);
}
