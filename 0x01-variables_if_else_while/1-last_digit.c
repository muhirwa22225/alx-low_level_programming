#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints last digit of a number
 * stored in a variable
 * Return: Always (Success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand () - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		Printf("Last digit of %d and is greater than 5/n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d and is 0/n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		print("Last digit of %d and is less than 6 and not 0/n", n, lastd);
	}
	return (0);
}
