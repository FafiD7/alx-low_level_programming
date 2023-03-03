#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - a function that adds two numbers.
 * @n1: an input number
 * @n2: an input number
 * @r: a pointer to buffer
 * @size_r: buffer size
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int o = 0, i = 0, j = 0, digit = 0;
	int v1 = 0, v2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || o == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		temp_tot = v1 + v2 + o;
		if (temp_tot >= 10)
			o = 1;
		else
			o = 0;
		if (digit >= (size_r - 1))
			return (0);
		*(r + digit) = (temp_tot % 10) + '0';
		digit++;
		j--;
		i--;
	}
	if (digit == size_r)
		return (0);
	*(r + digit) = '\0';
	rev_string(r);
	return (r);
}
