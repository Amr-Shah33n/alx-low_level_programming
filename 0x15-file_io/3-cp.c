#include "main.h"

/**
 * main - copies file to file
 * @argv: array of arguments
 * @argc: count
 * Return: wrong argc 97, file_from error 98, 100 on closing error
 **/
int main(int argc, char **argv)
{
	char *buffer;
	int fd_from, fd_to, r = 0;

	buffer = malloc(sizeof(char) * 1024);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	r = read(fd_from, buffer, 1024);
	if (fd_from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	while (r != 0)
	{
		write_to_file(argv[2], fd_to, buffer, r);
		r = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_APPEND | O_WRONLY);
	}
	free(buffer);
	close_all(fd_to, fd_from);
	return (0);
}

/**
 * write_to_file - writes to file
 * @filename: filename
 * @fd: file descriptor
 * @buffer: buffer storing value to be written
 * @count: charc to be written
 * Return: int return
 **/
int write_to_file(char *filename, int fd, char *buffer, int count)
{
	int w;

	w = write(fd, buffer, count);
	if (w == -1 || fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		free(buffer);
		exit(99);
	}
	return (w);
}

/**
 * close_all - closes everything
 * @fd_to: to file descriptor
 * @fd_from: from file desciptor
 * Return: void
 **/
void close_all(int fd_to, int fd_from)
{
	int close_from = 0, close_to = 0;

	close_from = close(fd_from);
	close_to = close(fd_to);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
