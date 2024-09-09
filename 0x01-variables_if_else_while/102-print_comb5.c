#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
        int n1 = 0;
        int n2 = 0;
        int n3 = 0;
	int n4 = 1;

        while (n1 <= 9)
        {
                while (n2 <= 9)
                {
                        while (n3 <= 9)
                        {
				while (n4 <= 9)
				{
					if ((n4 > n3 && n3 > n2 && n2 > n1) && (n1 != n2 && n2 != n3 && n3 != n4))
					{
						putchar(n1 + 48);
						putchar(n2 + 48);
						putchar(' ');
						putchar(n3 + 48);
						putchar(n4 + 48);
						if (n1 + n2 + n3 != 24)
						{
							putchar(',');
							putchar(' ');
						}
					}
					n4++;
				}
				n4 = 0;
                                n3++;
                        }
                        n3 = 0;
                        n2++;
                }
                n2 = 0;
                n1++;
	}
	putchar ('\n');
	return (0);
}
