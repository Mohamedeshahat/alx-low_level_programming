#include"main.h"
#include<stdio.h>
/**
 * print _array - funcrion for printing array
 * @a: parameter
 * @n: parameter
 * Return: zero
 */
void print_array(int *a, int n)
{
	int i;

	for (i =0; i < n; i++)
	{
	printf("%d, ", *(a + i));
	}
	printf("\n");
}	
