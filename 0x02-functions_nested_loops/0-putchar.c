#include "main.h"
/**
 * main- A program that prints putchar followed
 * by a new line
 * Return: 0
 */

int main(void)
{
	char word[9] = "_putchar";

	int i = 0;


	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

