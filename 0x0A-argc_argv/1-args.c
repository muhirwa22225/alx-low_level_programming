#include <stdio.h>

/**
 * main - print every argument number passed on it
 * @argc: count arguments
 * @argv: array arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
