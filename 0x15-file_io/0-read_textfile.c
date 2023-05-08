#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: name of file to be read
 * @letters: number of letters to be read
 * Return: bunver if charachters printed or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tmp;
	ssize_t op, re, wr = 0;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(tmp);
		return (0);
	}
	re = read(op, tmp, letters);
	if (re == -1)
	{
		free(tmp);
		return (0);
	}
	wr = write(STDOUT_FILENO, tmp, letters);
	if (wr == -1 || wr != re)
	{
		free(tmp);
		return (0);
	}
	free(tmp);
	close(op);
	return (wr);
}
