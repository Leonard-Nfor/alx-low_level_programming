#include"main.h"
int search_sqrt_recursion(int n, int a);
/**
 * _sqrt_recursion - Functions name
 * @n: Inputs
 * Return: Return the square root of a natural number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (search_sqrt_recursion(n, 0));
}
/**
 * search_sqrt_recursion - Functions name
 * @n: the number to look for square root
 * @a: A guess for the square root
 * Return: Return the guess if is the square root or -1
 */
int search_sqrt_recursion(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else if (a * a < n)
	{
		return (search_sqrt_recursion(n, a + 1));
	}
	else
	{
		return (search_sqrt_recursion(n, a + 1));
	}
}
