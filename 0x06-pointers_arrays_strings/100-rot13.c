#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @n: a pointer
 *
 * Return: 0
 */

char *rot13(char *n)
{
	int a;
	int b;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (n[a] == data1[b])
			{
				n[a] = datarot[b];
				break;
			}
		}
	}
	return (n);
}
