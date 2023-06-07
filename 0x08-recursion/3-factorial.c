#include"main.h"
/**
 * factorial - Functions name.
 * @n : Inputs
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || 0)
		return (1);
	return (n * factorial(n - 1));
}

