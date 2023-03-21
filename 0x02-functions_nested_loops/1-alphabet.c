/*
 * Auth: Eric Kwakye Boateng
 * Task: The alphabet game
 */
#include <unistd.h>
/*
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line.
 *
 */
void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);

	_putchar('\n');
	}
