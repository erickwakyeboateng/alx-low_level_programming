#include "main.h"
/**
 * my_function - function to loop the new second variable
 *
 * @n: int argument
 * @result: int argument
 *
 * Return: sqaure root
 */

int my_function(int n, int result)
{
	if (result * result == n)
	{
		return (result);
	}
	else if (result * result > n)
	{
		return (-1);
	}
	else
		return (my_function(n, result + 1));
}

/**
 * _sqrt_recursion - natural square root of a number
 *
 * @n: int argument
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (my_function(n, 0));
}
