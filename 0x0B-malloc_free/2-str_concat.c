#include"main.h"
#include<stdlib.h>
/**
 * str_concat - concatenate two string
 * @s1: the first string to  be concatenate
 * @s2: the second string
 * Return: The concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
		return (NULL);
	i = j = 0;

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		j++, i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
