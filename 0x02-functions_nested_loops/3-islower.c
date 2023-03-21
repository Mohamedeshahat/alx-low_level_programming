#include "main.h"
/**
 * _islower - lowercase checking
 * @c: is paramter to store charater
 * Return: if the charater is lowercase return 1 anything else retun 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
