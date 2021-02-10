#include "holberton.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	char lowerletter;

	lowerletter = 'a';

	while (lowerletter <= 'z')
	{
		_putchar(lowerletter);
		lowerletter++;
	}
	_putchar('\n');
}
