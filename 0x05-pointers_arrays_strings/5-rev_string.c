#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int lenght = 0, index = 0;
	char temp;

	while (s[index++])
		len++;

	for (index = lenght - 1; index >= lenght / 2; index--)
	{
		temp = s[index];
		s[index] = s[lenght - index - 1];
		s[lenght - index - 1] = temp;
	}
}
