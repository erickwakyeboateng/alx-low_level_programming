#include "main.h"
/**
 *_strcat - appends the src string to the dest string.
 * @dest: A pointer to the string to be concatenated upon.
 * @src:  The source string to be appended to @dest.
 *
 * Return: Points to the destination of dest.
 *
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
