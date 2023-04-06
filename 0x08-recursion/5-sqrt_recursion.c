#include"main.h"
/**
 * _sqrt_recursion - look for square root on a number
 * @n: the input integer
 * Return: the resulting answer
 */
int real_sqrt_recursion(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}
/**
 * real_sqrt_recursion -find the square root of the number
 * @n: the number itself
 * @i: the iterator
 */
int real_sqrt_recursion(int n, int i)
{
what is the dateline of today
what is the dateline of today
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}



