#include<stdio.h>
#include<stdlib.h>
/**
 * main  - function print mul
 * @argc: paramter
 * @argv: paramter
 * Return: alywas zero
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
