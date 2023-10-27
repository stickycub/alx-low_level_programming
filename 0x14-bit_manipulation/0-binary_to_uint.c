#include <stdio.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to the binary string containing '0' and '1' characters.
 *
 * Return: The converted number, or 0 if there is any non-binary character or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int bin = 0;

	if (b == NULL)
		return (0);

	while (b[bin] != '\0') {
		if (b[bin] != '0' && b[bin] != '1') {
			return (0);
		}

		result = (result << 1) | (b[bin] - '0');
		bin++;
	}

	return (result);
}
