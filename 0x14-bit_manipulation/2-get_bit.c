#include <stdio.h>
#include "main.h"

/**
 * get_bit - A function that get a bit at its index
 * @n: The number to get
 * @index: The index where we should get our bit
 * Return: The value of the bis or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	else if ((n & max))
		return (1);
	else
		return (0);
}
