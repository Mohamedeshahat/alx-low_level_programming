#include"main.h"
/**
 * _puts_recursion - function that print all character
 * @s: parametre
 * return: nothing
 */
void _puts_recursion(char *s)
{
	if (*S == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
