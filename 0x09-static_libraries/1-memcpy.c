#include"main.h"
/**
 * _memcpy - The functions name
 * @dest: The destination of copied input
 * @src: The where to copy from
 * @n: The bytes to be copied
 * Return: Return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_d = dest;
	char *ptr_s = src;
	unsigned int i = 0;

	for (; i < n && *ptr_d != '\0'; i++)
	{
		*ptr_d = *ptr_s;
	}
	return (dest);
}
