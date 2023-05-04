#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * to an integer
 * @b: This point to the string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0;
	int base = 1, j = 0;

	if (b == NULL)
		return (0);

	while (b[j + 1])
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		j++;
	}

	while (j >= 0)
	{
		ret += ((b[j] - '0') * base);
		base *= 2;
		j--;
	}


	return (ret);

}
