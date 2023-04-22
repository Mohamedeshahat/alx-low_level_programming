#include"variadic_functions.h"
/**
 * sum_them_all - sum variables
 * @n: number of argument
 * @...: the integer to sum
 *
 * Return: the integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	va_list ap;
	int i = n;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
