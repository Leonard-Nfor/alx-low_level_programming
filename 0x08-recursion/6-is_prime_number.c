#include"main.h"
int is_prime_search(int n, int i);
/**
 * is_prime_search - Help search for prime.
 * @n: is the input
 * @i: Inputs
 * Return: 0 for failure and 1 for success
 */
int is_prime_search(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_search(n, i - 1));
	}
}
/**
 * is_prime_number - the functions name
 * @n: the number to check if is prime
 * Return: 1 for auccess and 0 for failure
 */
int is_prime_number(int n)
{
	return (is_prime_search(n, n / 2));
}
