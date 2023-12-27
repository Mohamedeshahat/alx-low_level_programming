#include"main.h"
/**
 * puts2 - funtion to print
 * @str: parameter
 * Return: void
 */
void puts2(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
