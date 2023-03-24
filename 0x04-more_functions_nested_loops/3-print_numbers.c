#include"main.h"
/**
 * print_numbers - prohram for printing numbers
 *
 * Return: no return
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
