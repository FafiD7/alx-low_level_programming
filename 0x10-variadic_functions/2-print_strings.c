#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *  print_strings -  a function that prints strings, followed by a new line.
 *  @separator: string to be printed between the strings
 *  @n: number of integer
 *
 *  Return: always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *str;
	unsigned int i;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(s, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}
