#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 * @n: the variable to be checked
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar((n % 10) + '0');

	_putchar('\n');
}
