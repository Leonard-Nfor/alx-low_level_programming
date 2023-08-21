#include"main.h"
/**
 * _islower - fxn name
 * @c: arguement
 * Return: an integer
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
