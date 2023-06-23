#include"variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - The functions name
 * @n: the const value
 * Return: The sum of alll its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list parameters;

	va_start(parameters, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(parameters, int);
	}
	va_end(parameters);
	return (sum);
}
