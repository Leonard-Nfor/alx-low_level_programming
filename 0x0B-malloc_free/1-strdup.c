#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - return a pointer to a new string which is a duplicate of str
 * @str : string
 * Return :0
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, j = 0;

	if (str == NULL)
		{
			return ('\0');
		}
		i = 0;
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * i++);
	if (ptr == NULL)
		{
			return ('\0');
		}
	for (j = 0; str[j]; j++)
		{
			ptr[j] = str[j];

		}
	return (ptr);
}


