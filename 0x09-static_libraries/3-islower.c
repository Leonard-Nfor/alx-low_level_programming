#include"main.h"
/**
 * _islower - The functions name
 * @c: The character to check
 * Return: Return the 1 success and 0 failure
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
