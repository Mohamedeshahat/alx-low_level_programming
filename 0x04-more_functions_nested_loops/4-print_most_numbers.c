#include "main.h"
/**
 * print_most_numbers - this program to print most numbers
 *
 * Return: is void
 */
void print_most_numbers(void)
{
	int x[] = {48, 49, 51, 53, 54, 55, 56, 57};
	int i;

	for (i = 0 ; i <= 8 ; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
}

