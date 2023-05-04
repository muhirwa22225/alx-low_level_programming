#include <stdio.h>

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index
 * @n: integer to be used
 * @index: where the bit value will be placed
 * Return: 1 when success, or -1 if there is error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value = 0x01;

	value <<= index;
	if (value == 0)
	{
		return (-1);
	}
	*n |= value;
	return (1);
}
