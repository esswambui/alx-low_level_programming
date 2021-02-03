#include <stdio.h>
#include <conio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	clrscr();
	printf("Size of a char: %2d bytes \n", sizeof(char));
	printf("Size of an int: %2d bytes \n", sizeof(int));
	printf("Size of a long int: %2d bytes \n", sizeof(long int));
	printf("Size of a long long int: %2d bytes \n", sizeof(long lomg int));
	printf("Size of a float: %2d bytes \n", sizeof(float *));
	getch();
	return (0);
}
