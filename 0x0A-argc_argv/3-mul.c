#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * @argv: an array of argument
 * @argc: a number of argument
 * mul: multiply of two number
 *
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i, pr;

	for (i = 1; i < argc; i++)
	{
		pr = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("pr = %d\n", pr);
	}
	return (pr);
}
