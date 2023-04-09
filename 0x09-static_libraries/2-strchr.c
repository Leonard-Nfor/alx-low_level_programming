#include "main.h"
/**
 * _strchr - Seaches for the first occurence of character c
 * @s: The string to be scanned
 * @c: The character to be searched in string s
 * Return: Return the pointer to first occurence of the character c or NULL if character not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

