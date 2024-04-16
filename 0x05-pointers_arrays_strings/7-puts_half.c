#include"main.h"
/**
 * puts_half - print the second half of the string
 * @str:  parameter
 * Retrun: void
 */
void puts_half(char *str)
{
	int length_of_the_string = 0;
	int index;
	int n = 0;


	for (index = 0; str[index]; index++)
	{
		length_of_the_string++;
	}

	if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
	}
	else
	{
		n = length_of_the_string  / 2;
	}

	for (index = n ; str[index]; index++)
	{
		_putchar(str[index]);
	}
	  _putchar('\n');

}

