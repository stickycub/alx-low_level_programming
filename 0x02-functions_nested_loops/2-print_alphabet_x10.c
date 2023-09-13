#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet.
 *
 * Return: 0 if succesful
 */

void print_alphabet_x10(void)
{
	char c;
	int a;

	a = 0;
	while (a < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	a++;
	}
}
