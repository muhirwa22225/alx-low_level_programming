#include <stdio.h>

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @n: integer to be setted
 * @index: the place to put the bit
 * Return: 1 success, or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long clear = 0x01;

	clear = ~(clear << index);

	if (clear == 0X00)
	{
		return (-1);
	}

	*n &= clear;
	return (1);
}
