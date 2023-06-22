#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - a function that add two numbers.
 * @a: the first number 
 * @b: the second number
 *
 * Return: alwayse 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that substract two numbers.
 * @a: the first number
 * @b: the second number
 *
 * Return: alwayse 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplay two numbers.
 * @a: the first number
 * @b: the second number
 *
 * Return: alwayse 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divided two numbers.
 * @a: the first number
 * @b: the second number
 *
 * Return: alwayse 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that return reminder of two numbers.
 * @a: the first number
 * @b: the second number
 *
 * Return: alwayse 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
