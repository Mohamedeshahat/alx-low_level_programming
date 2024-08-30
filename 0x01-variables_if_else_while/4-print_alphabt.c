#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
		if (a == 'e' || a == 'q')
			a++;
	}
	putchar('\n');
	return (0);
}
