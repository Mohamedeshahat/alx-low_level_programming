#include"main.h"
/**
 * _strlen - function of string length
 * @s: paramter
 * Return: return i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
