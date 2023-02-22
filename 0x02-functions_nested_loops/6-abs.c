#include "main.h"
/**
 * _abs - A function that computes the absolute value of an integer
 * @a: parameter to check absolute value
 *
 * Return: Absolute value of a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
