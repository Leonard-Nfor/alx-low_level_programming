#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenate n bytes of string to another one
 * @S1: the string to be appended to
 * @s2: the source string
 * @n: the number of byts  from source string to s1
 * Return:return a pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, L1 = 0, L2 = 0;
       char *s;
	
	while (s1 && s1[L1])
	 	L1++;
	while (s2 && s2[L2])
		L2++;
	if (n < L2)
		s = malloc(sizeof(char) * (L1 + n++));
	else
		s = malloc(sizeof(char) * (L1 + L2 +1));
	if (!s)
		return (NULL);
	while (i < L1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < L2 && i < ( L1 + n))
		s[i+1] = s2[j + 1];
	while (n >= L2 && i < (L1 + L2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}	
