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

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1; j < 10 ; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchae(j + '0');
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
