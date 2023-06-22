#include"3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum
 * @a: first number
 * @b: second number
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the sub
 * @a: first number
 * @b: second number
 *
 * Return: the sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the mul
 * @a: first number
 * @b: second number
 *
 * Return: the mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the div
 * @a: first number
 * @b: second number
 *
 * Return: the div
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the mod
 * @a: first number
 * @b: second number
 *
 * Return: the mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
