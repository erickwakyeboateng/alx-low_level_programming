#include "main.h"
/**
 * _strchr - ocates a character in a string
 * @c: character in the string
 * @s: string targeted
 * Return: Returns NULL if character not found.
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;

		if (s[i] == c)
			return (s + i);
		else
			return (NULL);

}
