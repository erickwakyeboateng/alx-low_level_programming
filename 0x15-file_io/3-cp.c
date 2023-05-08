#include "main.h"

/**
 * krate_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *krate_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * klose_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void klose_file(int fd)
{
	int clos;

	clos = close(fd);

	if (clos == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Note: If the argument count is incorrect - exit code 97.
 *       If file_from does not exist or cannot be read - exit code 98.
 *       If file_to cannot be created or written to - exit code 99.
 *       If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int f_rom, to_, r_ead, rite;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = krate_buffer(argv[2]);
	f_rom = open(argv[1], O_RDONLY);
	r_ead = read(f_rom, buf, 1024);
	to_ = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f_rom == -1 || r_ead == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read f_rom file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		rite = write(to_, buf, r_ead);
		if (to_ == -1 || rite == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to_ %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r_ead = read(f_rom, buf, 1024);
		to_ = open(argv[2], O_WRONLY | O_APPEND);

	} while (r_ead > 0);
	free(buf);
	klose_file(f_rom);
	klose_file(to_);
	return (0);
}
