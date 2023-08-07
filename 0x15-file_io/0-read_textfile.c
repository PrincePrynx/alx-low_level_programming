#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: name of file to read
 * @letters: number of letters to be read and printed
 * Return: number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int d_file, x, vault;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	d_file = open(filename, O_RDONLY);
	if (d_file == -1)
	{
		free(buff);
		return (0);
	}
	vault = read(d_file, buff, letters);
	if (vault == -1)
	{
		close(d_file);
		free(buff);
		return (0);
	}
	for (x = 0; x < vault; x++)
	{
		if (write(STDOUT_FILENO, &buff[x], 1) == -1)
		{
			close(d_file);
			free(buff);
			return (0);
		}
	}
	close(d_file);
	free(buff);
	return (vault);
}
