#include<stdio.h>
/**
 * main - Entry point
 *
 * description: this is a c program that prints alphabets and numbers
 *
 * Return: alaeys 0 (success)
 */
int main(void)
{
	int  i;
	char j;

	for (i = 0; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
