#include "holberton.h"

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void)
{
	int x;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (x = 0; x <= 14; x++)
		{
			if ((x / 10) > 0)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else
			{
				_putchar(x + '0');
			}
		}
		_putchar('\n');
	}
}
