#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: single letter input
 * Return: 1 if c is a leter (lower or uppercase), 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
