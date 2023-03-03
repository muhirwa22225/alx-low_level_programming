Beta Try the new code view
alx-low_level_programming/0x06-pointers_arrays_strings/3-strcmp.c
@Rwangajo
Rwangajo Task 3
Latest commit 922114b on Mar 26, 2022
 History
 1 contributor
Executable File  24 lines (22 sloc)  315 Bytes

#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if true, 0 if false
 */
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}

