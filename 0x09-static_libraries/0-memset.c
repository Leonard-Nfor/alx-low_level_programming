#include"main.h"
/**
 * _memset - The functions name
 * @s: The pointer to memory area
 * @b: The char to be filled in s
 * @n: The number of bytes
 * Return: Return a pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
