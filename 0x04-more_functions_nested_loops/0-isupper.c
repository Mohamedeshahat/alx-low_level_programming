#include "main.h"
/**
 * _isupper  - function to check chararcter uppercase
 *
 * @c: is a paramter
 *
 * Return: 1 for upper and 0 for lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
