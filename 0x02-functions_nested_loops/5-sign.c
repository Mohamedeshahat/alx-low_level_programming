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
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
                _putchar(48);
		return (0);
	}
}
