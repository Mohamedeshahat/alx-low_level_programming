#include "main.h"
/**
 * _strcpy - function to copy the content
 * @dest: parameter
 * @src: parameter
 * Return: zero
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
