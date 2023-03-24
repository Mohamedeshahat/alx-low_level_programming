#include "main.h"
/**
 * _isdigit - this program for checking numbers
 *
 * @c: is a paramter
 *
 * Return: 1 if it is digit 0 anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
