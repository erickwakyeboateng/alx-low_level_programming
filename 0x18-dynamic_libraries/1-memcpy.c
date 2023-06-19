#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @n: number of bytes to copy
 * @dest: area where bytes are copied
 * @src: area where bytes are copied from
 * Return: a pointer to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
