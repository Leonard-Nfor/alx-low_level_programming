#include "variadic_functions.h"
#include <stdarg.h>
/**
 *  sum_them_all -a function that return the sum of all its parameters
 *  @n: the number of parameters
 *  @....: a variable number of parameters passed to the function
 *  Return: n == 0-0 else the sume of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);
		va_end(ap);
		return (sum);
}

