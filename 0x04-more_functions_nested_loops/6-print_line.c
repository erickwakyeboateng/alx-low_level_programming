#include "main.h"
/**
 *print_line - prints a line
 *@n: number of times to check line
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
