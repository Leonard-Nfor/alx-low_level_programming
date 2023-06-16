#include"main.h"
/**
 * _putchar - The functions name
 * @c: the character to be printed
 * Return: 1 for success 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
