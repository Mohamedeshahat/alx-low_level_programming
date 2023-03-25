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

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j <= i ; j++)
		{
			if (size <=  0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}


