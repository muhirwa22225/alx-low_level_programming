#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: integer to be fliped
 * @m: integer to contain the fliped one
 * Return: 1 Always (success)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number = 0;

	if (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			number++;
		m = m >> 1;
		n = n >> 1;
	}

	return (number);

}
