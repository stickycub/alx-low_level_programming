#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0 on succes
 */

int main(void)
{
	unsigned long long a = 1, b = 2, next, sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += second;
		}
		next = a + b;
		a = b;
		b = next;
	}
	printf("%llu\n", sum);
	return (0);
}

