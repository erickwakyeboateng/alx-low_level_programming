/*
 * Task: 9-times_table.c
 * Auth: Eric Kwakye Boateng
 */

#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, multi, product;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			product = num * multi;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
