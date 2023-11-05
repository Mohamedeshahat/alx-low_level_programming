#include"main.h"
/**
 * _sqrt_recursion - print the square root
 * @n: paramter
 * Return: the normal square root
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - square root function
 * @val: paramter
 * @n: paramter
 * Return:sqrt
 */
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
