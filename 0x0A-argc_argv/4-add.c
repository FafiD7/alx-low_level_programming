#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * main - a program that adds positive numbers.
 * @argv: an array of argument
 * @argc: a number of argumrnt
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int b, sum = 0;
	char *a;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		a = argv[i];
		for (b = 0; b < strlen(a); b++)
		{
			if (a[b] < 48 || a[b] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
			sum += atoi(a);
			a++;
		}
		printf("%d\n", sum);
		}
		else
		{
			printf("0\n");
		}
		return (0);

}
