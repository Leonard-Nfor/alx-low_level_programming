#include"main.h"
/**
 * _strcmp - The function name.
 * @s1: The first string
 * @s2: The second string
 * Return: Return 0 for success
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

