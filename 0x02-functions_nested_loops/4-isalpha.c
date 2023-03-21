#include "main.h"
/**
 * _isalpha - checking for alohabet
 * @c: is a paramter
 * Return: if it is a character return 1 anything else return 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
