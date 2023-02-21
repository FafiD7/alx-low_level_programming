#include <stdio.h>
/**
 * main - A program that print a size of variuos types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("sizeof a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("sizeof an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("sizeof a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("sizeof a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("sizeof a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
