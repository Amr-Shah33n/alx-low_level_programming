#include "main.h"

/**
 * create_file - reads a text file and prints it to the stdout
 * @filename: name of file to be read
 * @text_content: text to write
 * Return: -1 on failure , 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	char *tmp;
	int l = 0, op = 0, wr = 0;

	if (filename == NULL)
		return (-1);
	tmp = text_content;
	while (*tmp != '\0')
	{
		l++;
		tmp++;
	}

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (op == -1)
	{
		return (-1);
	}
	wr = write(op, text_content, l);
	if (wr == -1)
	{
		return (-1);
	}
	close(op);
	return (1);
}
