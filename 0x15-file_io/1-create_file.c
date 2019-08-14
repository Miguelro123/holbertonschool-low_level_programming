#include "holberton.h"
/**
 * create_file - Function that creates a file.
 * with 600 perms (do not change if it exists).
 * @filename: Name for file.
 * @text_content: Text to put into file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int length = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (inlen = 0, ptr = text_content; *ptr; ptr++)
			inlen++;
		length = write(file, text_content, inlen);
	}

	if (close(file) == -1 || inlen != length)
		return (-1);
	return (1);
}
