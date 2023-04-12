#include "main.h"
/**
 * _putchar - print a character to stdout
 * @c: the character to be printed
 * Return: return an integer 0 for success.
 */
int _putchar(char c)
{
	return(write(1, &c,1));
}
