#include "main.h"
/**
 * _isalpha -  checks for alphabetic character.
 * @c: checked variable
 * Return: 0 if succesful
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
