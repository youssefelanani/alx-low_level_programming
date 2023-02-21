#include "main.h"

/**
 * _isalpha - function that print lower and upper alphabet
 *
 * @c: parameter to br printed
 *
 * Return: 1 if it is alphabet lower or upper case
 * and 0 if else
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
