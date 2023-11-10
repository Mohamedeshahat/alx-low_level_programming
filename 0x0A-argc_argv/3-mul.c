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
	int sum = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		 sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
