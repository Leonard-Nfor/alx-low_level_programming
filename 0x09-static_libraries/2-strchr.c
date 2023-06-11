#include"main.h"
/**
 * _strchr - the functions name
 * @s: The pointer
 * @c: The number c
 * Return: Return the pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
