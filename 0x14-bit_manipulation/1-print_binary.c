#include <stdio.h>

/**
 * print_binary - A function that prints the binary representation of a number
 * @b: integer to be printed
 * Return: 0 Always (success)
 */
void print_binary(unsigned long int b)
{
	if (b > 1)
		print_binary(b >> 1);

	putchar('0' + (b & 1));
}
