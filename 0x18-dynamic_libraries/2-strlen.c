#include "main.h"
/**
 *_strlen - Function to return lenght of string
 * @s: the variable to be checked
 *
 * Return: returns lenght of string
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s++)
		lenght++;

	return (lenght);
}
