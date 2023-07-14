#include"main.h"
/**
 * append_text_to_file - A function add a text at the end of a file
 * @filename: The file to add text to
 * @text_content: The pointer to the string to append
 * Return: 1 for success and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, i, wr = 0;

	if (filename  == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	wr = write(fp, text_content, i);
	if (wr == -1 || wr == -1)
		return (-1);
	close(fp);
	return (1);
}
