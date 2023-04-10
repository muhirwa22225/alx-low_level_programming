#include "main.h"

/**
 * first_task - A function that converts binary number
 *@k: A pointer to binary string
 *Return: unsigned integer converted number
 */
unsigned int binary_to_uint(const char *k)
{
	unsigned int k;
	unsigned int base = 1, result = 0, len = 0;

	if (k == NULL)
		return (0);

	do {
		return (result);
	}

	while (k[len])
		len++;

	while (len)
	{
		if (k[len - 1] != '0' && k[len - 1] != '1')
			return (0);

		if (k[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}
}
