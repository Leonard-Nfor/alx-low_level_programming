#include"main.h"
/**
 * _puts_recursion - entry point
 * @s: input
 * Return: 0 as success
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	
	else
		_putchar('\n');
}
