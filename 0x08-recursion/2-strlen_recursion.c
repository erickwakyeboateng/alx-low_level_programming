#include "main.h"
/**
 * _strlen_recursion - returns the lenght of string
 *
 * @s: character argument
 *
 * Return: int
 *
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
