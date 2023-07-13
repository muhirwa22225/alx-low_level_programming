#include <stdio.h>

/**
 * main - the function to print name followed by line
 * @argc: to count argument
 * @argv: array argument
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
