#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
