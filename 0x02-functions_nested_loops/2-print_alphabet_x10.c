#include "holberton.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char lowerletter;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (lowerletter = 'a'; lowerletter <= 'z'; lowerletter++)
		{
			_putchar(lowerletter);
		}
		_putchar('\n');
	}

}
