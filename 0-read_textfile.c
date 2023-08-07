#include"main.h"
#include<stdlib.h>
/**
 * read_textfile - fxn name
 * @letters: numbers of letters to be read
 * @filename: the file to be read from
 * Return: The numbe of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t re;
	ssize_t wr;
	char *u;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	u = malloc(sizeof(char) * letters);
	re  = read(fd, u, letters);
	wr = write(STDOUT_FILENO, u, re);
	free(u);
	close(fd);
	return (wr);
}

