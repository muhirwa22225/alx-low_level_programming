#include <stdio.h>
#include "main.h"

/**
 * set_bit(unsigned long int *n, unsigned int index)
 * @n: number bit set are needed
 * @index: The number to set other equal
 * Return: The number of fliped bits
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return -1;
	*n |= (1UL << index);
	return 1;
}
