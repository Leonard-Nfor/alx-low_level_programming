#include"main.h"
/**
 * _putchar - the fxn name
 * @c: the character to be written
 * Return: an int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
