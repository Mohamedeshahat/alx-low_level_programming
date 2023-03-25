#include"main.h"
/**
 * print_triangle - this program for drawing triangle shape
 * @size: is the size of the triangle
 * Return: return empty
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < size ; i++)
	{
		if (size <=  0)
		{
			_putchar('\n');
		}
		else
		{
			for ((k = size - i) ; k >= 1; k--)
			{
				_putchar(32);
			}
			for (j =0 ; j <= i ; j++)
			{
				_putchar('#');
			}
		}
			_putchar('\n');
		
	}
}


