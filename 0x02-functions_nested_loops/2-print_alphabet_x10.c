/*
 * Auth: Eric Kwakye Boateng
 * Task: 2. 10 x alphabet
 */
#include <unistd.h>
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	inte alpha;

	while (counter++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z';
				alpha ++)
			_putchar(alpha);
		_putchar('\n');
	}
}
