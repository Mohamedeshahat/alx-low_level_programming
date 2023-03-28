#include<stdio.h>
/**
 * _strlen - return the length of a string
 *
 * @str: thr string to get the length of
 *
 * Return: @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}

