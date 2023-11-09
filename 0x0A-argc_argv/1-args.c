#include<stdio.h>
/**
 * main - function that print the number of arguments
 * @argc: paramter
 * @argv: paramter
 * Return: alywas zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
