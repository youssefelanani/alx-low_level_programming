#include "main.h"

/**
 * _isupper - function that check uppercase character
 *
 * @c: parametar prints character
 *
 * Return: 1 if uppercase
 * else 0
 */

int _isupper(int c)

{
i	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
