#include"main.h"
#include<stdlib.h>
/**
 * _memset - Functions name
 * @s: pointer
 * @b: character to be filled
 * @n: the size in bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
/**
 * _calloc - the functions name;
 *  @nmemb: elements
 *  @size: size in bytes
 *  Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
