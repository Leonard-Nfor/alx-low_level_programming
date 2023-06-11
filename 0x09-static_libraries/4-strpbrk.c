#include"main.h"
/**
 * _strpbrk - The functions name
 * @s: inputs
 * @accept: inputs
 * Return: return 0 success
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s != '\0')
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
