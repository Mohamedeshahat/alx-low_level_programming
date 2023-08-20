#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: the arguments values
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i;
	int number;

	for (i = 0; argc > i; i++)
	{
		number += atoi(argv[i]);
	}
	printf("%d\n", number);
	return (0);
}
