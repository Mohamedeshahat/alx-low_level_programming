#include<stdio.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: the arguments values
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argc > i; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
