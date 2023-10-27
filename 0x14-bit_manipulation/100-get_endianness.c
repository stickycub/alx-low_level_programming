#include <stdio.h>

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
