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
	int i;
	int j;

	for (i = 0 ; i < 100 ; i++)
	{
		for (j = 0 ; j < 100 ; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((i % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
putchar(',');
return (0);
}
