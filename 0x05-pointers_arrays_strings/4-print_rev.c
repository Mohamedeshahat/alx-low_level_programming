#include"main.h"
/**
 * print_rev - print in reverse
 * @s: parametre
 * Return: void
 */
void print_rev(char *s)
{
	int i = 1;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');
}

