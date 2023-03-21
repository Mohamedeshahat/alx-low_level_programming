#include "main.h"
/**
 * print_last_digit - ti print the last number
 * @n: jist paramter
 * Return: return thr last digit from the number
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
