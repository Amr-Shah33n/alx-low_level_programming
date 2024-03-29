#ifndef FILEIO_HEADER
#define FILEIO_HEADER
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_all(int fd_to, int fd_from);
int write_to_file(char *filename, int fd, char *buffer, int count);
#endif
