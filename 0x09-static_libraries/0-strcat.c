#include"main.h"
/**
 * _strcat - The functions name
 * @dest: destination area
 * @src: Source.
 * Return: Return dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	*dest = '\0';
	return (dest);
}
