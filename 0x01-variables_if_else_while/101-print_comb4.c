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
	int n3 = 2;

        while (n1 <= 9)
        {
		while (n2 <= 9)
		{
			while (n3 <= 9)
			{
				if ((n3 > n2 && n2> n1) && (n1 != n2 && n2 != n3))
                        {
                                putchar(n1 + 48);
                                putchar(n2 + 48);
				putchar(n3 + 48);
                                if (n1 + n2 + n3 != 24)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                        n3++;
			}
			n3 = 0;
			n2++;
		}
		n2 = 0;
		n1++;
	}
	putchar('\n');
        return (0);
}
