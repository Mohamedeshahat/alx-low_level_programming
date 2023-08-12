#include"main.h"
#include<unistd.h>
/**
 * _strlen_recursion - function for string length
 * @s: pointer
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		n++;
	}
	return (n);
}


