#include"main.h"
/**
 * _puts - function for printing
 * @str: paranetre
 * Return void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
