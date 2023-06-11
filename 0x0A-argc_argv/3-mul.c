#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  a program that multiplies two numbers.
 * @argv: an array of argument
 * @argc: number of argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, j, pr;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		pr = i * j;
		printf("%d\n", pr);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
