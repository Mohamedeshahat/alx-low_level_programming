#include"main.h"
/**
 * print_rev - print in reverse
 * @s: parametre
 * Return: void
 */
void print_rev(char *s)
{
	int i = 1;

	for (i = 1; *s != '\0'; s++)
	{
		i++;
	}
	for (; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

