#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - memory allocation
 * @b: number of bytes to be allocated
 * Return: a pointer or an address to be allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
