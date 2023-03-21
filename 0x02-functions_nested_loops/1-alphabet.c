#include "main.h"
/**
 *print_alphabet -make the alphabets
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
