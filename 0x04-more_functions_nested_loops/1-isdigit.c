#include "main.h"
/**
 * _isdigit - check the code
 * @c: the value to be checked
 * Return: Returns 1 if c is a digit; Returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
