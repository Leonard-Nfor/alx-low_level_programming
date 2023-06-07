#include"main.h"
/**
 * _strlen_recursion - The functions name.
 * @s: Inputs
 * Return: Return the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i +=  _strlen_recursion(s + 1);
	}
	return (i);
}
