#include "function_pointers.h"
/**
 * _putchar - afuction that print a character to stdout
 * @c: being the input
 * Return: return an int
 */
int _putchar(char c)
{
	_putchar(write(1, &c, 1));
	return (0);
}
