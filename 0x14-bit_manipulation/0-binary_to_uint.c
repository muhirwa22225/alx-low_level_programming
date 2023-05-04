#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * to an integer
 * @b: This point to the string
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, ret = 0, len = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[len])
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
		{
			return (0);
		}

		if (b[len - 1] == '1')
			ret += base;
		base *= 2;
		len--;
	}
	return (ret);
}

/**
 * main - Entry point of the function
 * Return: 0 Always (success)
 */
int main(void)
{
	binary_to_uint("1");
	binary_to_uint("101");
	binary_to_uint("1e01");
	binary_to_uint("1100010");
	binary_to_uint("0000000000000000000110010010");
	return (0);
}
