#include"main.h"
/**
 * _puts_recursion - The function's name.
 *  @s: Inputs
 *  Return: Always 0(success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
		_putchar('\n');
}

