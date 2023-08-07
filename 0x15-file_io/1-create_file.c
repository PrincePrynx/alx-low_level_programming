#include "main.h"


/**
 * create_file - function that creates a file
 * @filename: file's name
 * @text_content: input
 *
 * Return: 1 on success, -1 (failed)
 */


int create_file(const char *filename, char *text_content)
{
	int F = 0;
	int T = 0;

	if (filename == NULL)
		return (-1);
	F = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (F == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[T] != '\0')
			++T;
		if (write(F, text_content, T) == -1)
			return (-1);
	}
	close(F);
	return (1);
}
