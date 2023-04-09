#include "main.h"
/**
 * _strpbrk - return pointerto the first occurence in str1 of any 0f the character that are part of the str2, or NULL if there are no matches
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;


	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}


return ('\0');
}

