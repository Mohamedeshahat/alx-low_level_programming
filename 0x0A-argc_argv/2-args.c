#include<stdio.h>
/**
 * main - function that print all arguments
 * @argc: paramter
 * @argv: paramter
 * Return: alywas zero
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
