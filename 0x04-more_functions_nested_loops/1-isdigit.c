#include "main.h"
/**
 * _isdigit - A function that checks for a digit
 * @c: an input integer
 *
 * Return: 1 (Success)
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
