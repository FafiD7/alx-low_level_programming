#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints its name
 * @argv: array of arguments
 * @argc: number of argument
 *
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
