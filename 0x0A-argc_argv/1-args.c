#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints the number of arguments passed into it.
 * @argv: an array of argument
 * @argc: number of argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}	
