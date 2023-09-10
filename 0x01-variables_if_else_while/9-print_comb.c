#include <stdio.h>
/**
 * main  - This is the entry point
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int c  = 0;
		for (c = 0; c < 10; c++)
		{
			putchar(c + '0');
			if (c < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
