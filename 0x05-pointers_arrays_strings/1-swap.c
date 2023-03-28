#include<stdio.h>
/**
 * swap_int - swaps the values of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: empty
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
