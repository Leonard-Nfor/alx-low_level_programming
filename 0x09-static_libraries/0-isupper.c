#include"main.h"
/**
 * _isupper - Is the function name
 * @c: The input character to be check
 * Return: Return 1 for success and 0 failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
