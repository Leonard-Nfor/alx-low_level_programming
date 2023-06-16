#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
 * string_nconcat - The functions name
 * @s1: string 1
 * @s2: string 2
 * @n: The number of bytes
 * Return: Return a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	p = malloc(len1 + n +1);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}
