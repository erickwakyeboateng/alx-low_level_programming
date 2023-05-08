#include "main.h"

/**
 * read_textfile - Reads and prints a text file to POSIX stdout.
 * @filename: A pointer that points to the name of the file.
 * @letters: Number of letters to be read and printed by function
 * Return: if filename is NULL return 0; if write fails or does not
 * write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t k, t, s;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	k = open(filename, O_RDONLY);
	t = read(k, buffer, letters);
	s = write(STDOUT_FILENO, buffer, t);

	if (k == -1 || t == -1 || s == -1 || s != t)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(k);

	return (s);
}
