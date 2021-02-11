#include "holberton.h"

/**
 * print_square - print a square of #'s given size
 * @size: size to draw
 */

void print_square(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');

	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
