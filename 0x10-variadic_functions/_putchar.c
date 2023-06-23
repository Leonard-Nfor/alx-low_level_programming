#include"variadic_functions.h"
/**
 * _putchar - The functions name
 * @c: The character to be printed to stdout
 * Return: 1 for success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
