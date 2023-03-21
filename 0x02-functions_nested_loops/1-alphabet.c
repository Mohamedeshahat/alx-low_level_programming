#include "main.h"
/**
 * main - Entry point
 *
 * description: this is a c program that prints alphabets
 *
 * Return: alaeys 0 (success)
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
