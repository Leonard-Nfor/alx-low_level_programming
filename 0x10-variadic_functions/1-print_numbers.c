#include "variadic_functions.h"
#include<stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that print numbers
 * @separator: a string to be printed between the numbers
 * @n: the numbers of integers to passed to the function
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list name;
	unsigned int i;

	va_start(name, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(name, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(name);
}
