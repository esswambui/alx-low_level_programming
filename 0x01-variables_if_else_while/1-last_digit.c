#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last6;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last6 = n % 1000000;

	if (last6 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last6);
	}
	else if (last6 == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, last6);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last6);
	}

	return (0);
}
