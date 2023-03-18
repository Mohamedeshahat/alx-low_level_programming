#include<stdio.h>
/**
 * main - Entry point
 *
 * description: this is a c program that prints alphabets
 *
 * Return: alaeys 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
