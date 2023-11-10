#include<stdio.h>
#include<stdlib.h>
/**
 * main - function that print all arguments
 * @argc: paramter
 * @argv: paramter
 * Return: alywas zero
 */
int main(int argc, char *argv[])
{
        int x;
	int y= 0;

	
	{
		printf("Error\n");
	}
        for (x = 1; x < argc; x++)
        {
		if (argv[x] == %d )
		{	
		y += atoi(argv[x]);
		}
               
        }
	printf("%d\n", y);
        return (0);
}
