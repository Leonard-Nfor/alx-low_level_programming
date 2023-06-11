#include"main.h"
/**
 * _strlen - The functions name
 * @s: The pointer to string
 * Return: Return s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
