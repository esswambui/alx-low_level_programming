#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		return ((-1) * n);

	}
	else
	{
		return (n);
	}

}
