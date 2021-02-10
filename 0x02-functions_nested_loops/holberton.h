#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 */
void print_alphabet_x10(void);

/**
 * _islower - checks if a character is lowercase
 * @c: character to check
 *
 * Return: 1 if lowercase, 0 if uppercase
 */

int _islower(int c);

/**
 * _isalpha - checks if a character is an  alphabet
 * @c: character to check
 *
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */

int _isalpha(int c);

/**
 * print_sign - prints the  sign of a number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */

int print_sign(int n);

/**
 * _abs - computes the  absolute value of an  integer
 * @j: integer argument
 *
 * Return: the absolute value of the number
 */

int _abs(int j);


/**
 * print_last_digit - prints the last digit of a number
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n);



#endif
