#include <stdio.h>
#include "main.h"

/**
 * printf_binary - Prints the binary representation of a decimal number
 * @n: the number to be printed
 * Return: 0 Always (success)
 */
void printf_binary(unsigned long int n)
{
	if (n > 1)
	{
		printf_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}
