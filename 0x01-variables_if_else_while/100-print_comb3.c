#include <stdio.h>
/**
 * main - This prints all possible different combinations of two digits
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens < 10; tens++)
	{
		for (ones = '0'; ones < 10; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
			}
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
