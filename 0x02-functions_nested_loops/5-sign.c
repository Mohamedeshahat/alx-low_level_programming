#include "main.h"
/**
 * print_sing - for checking sign of numbers
 * @n: is paramter to store charater
 * Return: if the charater is positive return 1 if  it is 0 retun
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
