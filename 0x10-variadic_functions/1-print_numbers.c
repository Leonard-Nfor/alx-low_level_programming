#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - The functions name
 * @separator : The string
 * @n: The integer to be printed
 * Return: The printed integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, value;
	va_list numbs;

	va_start(numbs, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(numbs, int);
		printf("%d", value);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbs);
}
