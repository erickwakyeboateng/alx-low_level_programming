#include "main.h"
/**
 * print_rev - prints the reverse
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int lon = 0;
	int o;

	while (*s != '\0')
	{
		lon++;
		s++;
	}
	s--;
	for (o = lon; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
