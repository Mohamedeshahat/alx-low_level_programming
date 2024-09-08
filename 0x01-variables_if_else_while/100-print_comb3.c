#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n1 = 0;
	int n2 = 1;

	while (n1 <= 9)
	{
		while (n2 <= 9)
		{
			if (n2 > n1 && n1 != n2)
			{
				putchar(n1 + 48);
				putchar(n2 + 48);
				if (n1 + n2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n2 = 0;
		n1++;
	}
	putchar('\n');
	return (0);
}
