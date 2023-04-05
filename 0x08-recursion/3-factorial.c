#include "main.h"
/**
 * factorial - gives the factorial of a given number
 * @n: given number
 * Return: Int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
