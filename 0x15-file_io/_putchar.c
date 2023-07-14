#include"main.h"
/**
 * _putchar - The functions name
 * @c: The character to be written to stdout
 * Return: The written character
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
