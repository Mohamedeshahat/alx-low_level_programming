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
	int p;
	int q;

	for (p = 0 ; p <= 98 ; p++)
	{
		for (q = p + 1  ; q <= 99 ; q++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');
			if (p == 98 && q == 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(',');
return (0);
}
