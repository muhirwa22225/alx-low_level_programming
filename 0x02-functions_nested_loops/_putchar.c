#include <unistd>
/**
 * _putchar - Writes the character C to stdout
 * @c: The character to print
 * Return: 1 (Success)
 */
int _putchar (char c)
{
	return(write(1, &c, 1));
}
