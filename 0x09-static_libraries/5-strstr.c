#include "main.h"
/**
 * _strstr - find the first occurence of the substring needle in haystact
 * @haystack: the string to be scanned
 * @needle: the string to be searched for
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}


		if (*p == '\0')
			return (haystack);
	}


	return (0);
}

