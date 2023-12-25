#include"main.h"
/**
 * swap_int - function of swaping
 * @a: pointer to int
 * @b: pointer to int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *b;
	*b = *a;
	*a = z;
}
