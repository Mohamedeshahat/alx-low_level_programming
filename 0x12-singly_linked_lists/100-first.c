#include"lists.h"

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - executrs befor main
 * Return: void
 */
void _constructor(void)
{
	printf("You'are beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
