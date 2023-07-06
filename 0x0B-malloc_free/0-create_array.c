#include"main.h"
#include<stdlib.h>
/**
 * create_array - A function that create an arrray and initialize it
 * @size: The size of the array
 * @c: The character to be filled
 * Return: Array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
