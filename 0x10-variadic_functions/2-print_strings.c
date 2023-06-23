#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * print_strings - The functions name
 * @separator: The input
 * @n: The number of strings
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *st;

	unsigined int i;

	va_list str;

	if (separator == NULL)
		separator = "";

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		st = va_arg(str, char *);
		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
