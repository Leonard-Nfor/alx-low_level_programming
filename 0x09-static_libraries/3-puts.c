#include"main.h"
/**
 * _puts - The functions name
 * @s: the pointer.
 * Return: Nothing
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
