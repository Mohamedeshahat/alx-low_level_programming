#include<stdio.h>
/**
 * main - Entry point
 *
 * description: this is a c program that prints the alphbets
 *
 * Return: alaeys 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
