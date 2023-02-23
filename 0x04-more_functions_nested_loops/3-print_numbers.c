#include "main.h"

/**
 * print_numbers - function that prints number
 *
 * Return: always 0
 */
void print_numbers(void)
{
	char i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
