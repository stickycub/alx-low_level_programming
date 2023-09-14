#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 on success
 */

int main(void)
{
	int n = 50;
	unsigned long long a = 1, b = 2, next;

	printf("%llu, %llu", a, b);
	for (int i = 3; i <= n; i++)
	{
		next = a + b;
		printf(", %llu", next);
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
