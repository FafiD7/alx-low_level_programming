#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argv: an array of argument
 * @argc: a number of argumrnt
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
