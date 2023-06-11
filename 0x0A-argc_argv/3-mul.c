#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * @argv: an array of argument
 * @argc: a number of argument
 * pr: multiply of two number
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, j, pr;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		pr = i * j;

		printf("pr = %d\n", pr);
		return (0);
}
