#include"main.h"
/**
 * create_file - function to create a file
 * @filename: The file to be created
 * @text_content: A pointer to a string
 * Return: 1 for success and -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, wr, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[i];)
			i++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fp, text_content, i);
	if (fp == -1)
		return (-1);
	if (wr == -1)
		return (-1);
	close(fp);
	return (1);
}
