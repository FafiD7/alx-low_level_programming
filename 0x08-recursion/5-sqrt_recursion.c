#include "main.h"
int actual_sqrt_recursion(int n, int a);
/**
 * _sqrt_recursion - returns the natural square root of the number.
 * @n: an input
 *
 * Return: 0.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find thr natural square root of a number
 * @n: an input
 * @a: iterator
 *
 * Return: 0.
 */

int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (actual_sqrt_recursion(n, a + 1));
}
