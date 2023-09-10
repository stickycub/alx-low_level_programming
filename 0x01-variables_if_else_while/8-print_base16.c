#include <stdio.h>
/**
 * main - This is the entry point
 *
 * Return: 0 if succcesful
 */

int main(void)
{
	int c = 0;
	char d = 'a';

	while
		(c < 10) {
			putchar(c + '0');
			c++;
		}
	while
		(d < 'g') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
