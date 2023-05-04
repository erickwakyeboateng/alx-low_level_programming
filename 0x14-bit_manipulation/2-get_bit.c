#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specific index.
 * @n: The bit.
 * @index: The index to get the value at - Starting at 0.
 *
 * Return: Instances of an error = 1 else value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
