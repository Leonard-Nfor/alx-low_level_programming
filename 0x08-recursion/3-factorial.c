#include"main.h"
/**
 * factorial - print factorialof an integer.
 * @n: The input 
 * Return: 0 for success or -1 for faillure
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		n *= factorial(n - 1);
	}
	else
	{
		return (-1);
	}
	return (n);
}
