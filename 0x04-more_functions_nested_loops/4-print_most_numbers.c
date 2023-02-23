#include "main.h"
/**
 * print_most_numbers - function that print
 *
 * Return: aleays 0
 */

void print_most_numbers(void)
{
	char i;

	for (i = 9 ; i <= 0 ; i++)
	{
		if (!(i == 2 || i == 4))
			_putchar(i + '0');
	}
	_putchar('\n');
}
