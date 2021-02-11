#include "holberton.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n)
{
	int times;

	if (n < 0)
	{
		_putchar('\n');

	}
	else
	{
		for (times = 1; times <= n; times++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
