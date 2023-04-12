#include "main.h"
#include <stdlib.h>
/**
 * create_array - a pointer to the first letter of the string
 * @c: the input
 * @size: the size of the character in bytes
 * Return: a character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
	}
	return (ptr);
}
