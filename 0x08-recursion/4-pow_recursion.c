#include"main.h"
/**
 * _pow_recursion - check returns the value of an integer raise to another
 * @x: the input
 * @y: the input
 * Return: 0 for success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
