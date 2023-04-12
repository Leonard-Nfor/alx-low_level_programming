#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - join two strings s1 and s2
 * @s1: string one
 * @s2: string 2
 * Description: function that concatenate two strings
 * Return : return the concatanation of S1 and S2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++, j++;
	}
	concat[i] = '\0';
	return (concat);
}

