#include"main.h"
/**
 * factorial - this is function that use to get the factorial number
 * @n: paramter
 * Return: number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
	}
	return (n);
}

