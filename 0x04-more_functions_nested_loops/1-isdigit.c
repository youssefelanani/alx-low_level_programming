#include "main.h"

/**
 * _isdigit - function that check digits
 *
 * @c: parameter prin digit
 *
 * Return: always 1 if digit
 * else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c  <= 57)
		return (1);
	else
		return (0);
}
