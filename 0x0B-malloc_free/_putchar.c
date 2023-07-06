#include"main.h"
#include<unistd.h>
/**
 * _putchar - A function that write a character to the screen
 * @c: The character to be written
 * Return: An interger
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
