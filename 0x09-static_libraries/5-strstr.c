#include"main.h"
/**
 * _strstr - Functions name
 * @haystack: input
 * @needle: input
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *q = haystack;
		char *n = needle;

		while (*n != '\0' && *q == *n)
		{
			q++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
