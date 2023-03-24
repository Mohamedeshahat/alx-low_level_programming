#include "main.h"
/**
 * print_most_numbers - this program to print most numbers
 *
 * Return: is void
 */
void print_most_numbers(void)
{
	int x[] = {'0', '1', '3', '5', '6', '7', '8', '9'};
	int i;

	for (i = 0 ; i <= 8 ; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
}

