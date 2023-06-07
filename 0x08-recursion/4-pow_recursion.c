#include"main.h"
/**
 * _pow_recursion - Functions name
 * @x: inputs
 * @y: Inputs
 * Return: Return the value of x raise to the power y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
