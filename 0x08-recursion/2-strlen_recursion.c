#include"main.h"
/**
 * _strlen_recursion - Measure the length of a string
 * @s: The string to be measured
 * Return: 0 always (success)
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
	
