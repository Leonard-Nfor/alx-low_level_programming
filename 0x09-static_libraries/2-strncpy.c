#include"main.h"
/**
 * _strncpy - The functions name
 * @dest: The destinated memory area
 * @src: where to remove
 * @n: The number of bytes to be coppied
 * Return: Return dest to stdout
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
