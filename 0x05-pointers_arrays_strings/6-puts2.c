#include"main.h"
/**
 * puts2 - funtion to print
 * @str: parameter
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	
	}
	_putchar('\n');
}
