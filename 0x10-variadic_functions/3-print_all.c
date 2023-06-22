#include  "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -  a function that prints anything.
 * @char: a character
 * @format: types of arguments passed to the function
 *
 * Return: always 0
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;
	va_start(list, format);
	
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char*);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ",";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
