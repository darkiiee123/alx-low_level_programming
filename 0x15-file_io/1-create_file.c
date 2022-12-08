#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: 1 on success and 0 on error
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, len;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);

	if (file_d < 0)
		return (-1);

	if (!text_content)
	{
		close(file_d);
		return (1);
	}

	len = strlen(text_content);
	write(file_d, text_content, len);

	close(file_d);
	return (1);
}
