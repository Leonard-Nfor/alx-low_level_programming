#include"main.h"
/**
 * _atoi - The functions name
 * @s: The integer to be check.
 * Return: Return the integer
 */
int _atoi(char *s)
{
	int sign = 1;

	while (*s == '_' || *s == '\t' || *s == '\n')
	{
		s++;
	}
	if (*s == '-')
	{
		sign *= -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	int res = 0;

	while (*s >= '0' && *s <= '9')
	{
		res *= 10 + (*s - '0');
		s++;
	}
	return (res);
}

