#include "main.h"
/**
 * print_alphabet_x10 - make the alphabet 10 times
 * return void
 */
void print_alphabet_x10(void)
{
	int x;
	int ch;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
