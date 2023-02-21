#include <main.h>
/**
 *main - A program that prints a putchar
 * followed by a new line
 * Return: 0 (Always Success)
 */
int main(void)
{
	char word[] = "_putchar";

	int i = 0;

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
