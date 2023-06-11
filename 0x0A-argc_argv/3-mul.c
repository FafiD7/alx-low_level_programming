#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted
 *
 * Return: always 0
 */
int _atoi(char*s)
{
	int i,d,n,len,f,digit;

	i = 0;
	d = 0;
	len = 0;
	f = 0;
	digit = 0;
	
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
