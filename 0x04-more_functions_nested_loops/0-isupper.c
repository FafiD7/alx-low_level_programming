#include "main.h"
/**
 * _isupper - A function that check for uppercase character
 * @c: an input character
 * Return: 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

