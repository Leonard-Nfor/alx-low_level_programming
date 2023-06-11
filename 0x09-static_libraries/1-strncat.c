#include"main.h"
/**
 * _strncat - The functioms name
 * @dest: desnation the string
 * @src: String to be copied
 * @n: The bytes to be copied
 * Return: Return dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		*dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (dest);
}
