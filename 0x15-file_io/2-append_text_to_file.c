#include "main.h"


/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is name of the file.
 * @text_content: is str input
 * Return: 1 for file exist, -1 for does not exist/non-write permissions
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int d_file, x = 0;

	if (filename == NULL)
		return (-1);
	d_file = open(filename, O_APPEND | O_WRONLY);
	if (d_file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[x] != '\0')
			x++;
		if (write(d_file, text_content, x) == -1)
			return (-1);
	}
	close(d_file);
	return (1);
}
