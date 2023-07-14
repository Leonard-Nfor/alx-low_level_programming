#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/**
 * read_textfile - A function to read a file
 * @filename: The file to be read
 * @letters: The number of lettters to be read
 * Return: The read lettters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	ssize_t fp;
	ssize_t re;
	ssize_t wr;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
		return (0);
	re = read(fp, ch, letters);
	wr = write(STDOUT_FILENO, ch, re);

	free(ch);
	close(fp);
	return (wr);
}
