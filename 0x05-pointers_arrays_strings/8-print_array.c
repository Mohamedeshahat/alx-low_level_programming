#include"main.h"
#include<stdio.h>
/**
 * print_array - funcrion for printing array
 * @a: parameter
 * @n: parameter
 * Return: zero
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
printf("\n");
}
