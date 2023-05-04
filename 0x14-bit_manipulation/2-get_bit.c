#include <stdio.h>

/**
 * get_bit - A function to return the bit of the integer
 * @n: integer to be evaluated on
 * @index: the starting form of the index
 * Return: index value or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;

	if (max == 0)
	{
		return (-1);
	}
	else if ((n & max))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (index);
}
