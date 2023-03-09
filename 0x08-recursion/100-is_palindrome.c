#include "main.h"
int check_pal(char *s, int i, int a);
int _strlen_recursion(char *s);
/**
 * is_palindrome - to check if a string is palindrome or not
 * @s: a string
 *
 * Return: 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursin - return te length of the string
 * @s: a string
 *
 * Return: 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal  - checks the characters recursively for  palindrome
 * @s: an input
 * @i: iterator
 * @a: length of the string
 *
 * Return: 0.
 */

int check_pal(char *s, int i, int a)
{
	if (*(s + i) != *(s + a - 1))
		return (0);
	if (i >= a)
		return (1);
	return (check_pal(s, i + 1, a - 1));
}
