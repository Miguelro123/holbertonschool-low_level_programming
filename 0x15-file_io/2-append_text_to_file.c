#include "holberton.h"
/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: Name of file.
 * @text_content: String to write.
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int cont = 0;
	int fdx = 0, fdw = 0;

	if (filename == NULL)
		return (-1);
	fdx = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0664);
	if (fdx == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (cont = 0; text_content[cont] != '\0'; cont++)
			;
		fdw = write(fdx, text_content, cont);
		if (fdw == -1)
			return (-1);
	}
	close(fdx);
	return (1);
}
