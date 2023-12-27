#include"main.h"
/**
 * rev_string - print in reverse
 * @s: paramter
 * Retrun: void
 */
void rev_string(char *s)
{
	int index;
	int len = 0;
	char swap;

	for (index = 0; s[index] != '\0'; index++)
	{
		len++;
	}
	for (index = len - 1; index >= len / 2; index--)
	{
		swap = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = swap;
	}
}
