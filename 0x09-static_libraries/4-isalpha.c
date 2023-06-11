#include"main.h"
/**
 * _isalpha - Functions name
 * @c: inputs
 * Return: Return 1 (success) 0 failuire
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
