#include"main.h"
#include<unistd.h>

/**
 * -putchar - write the character c to stdout
 *  @c: The character to print
 *
 *  Return: Onsuccess 1.
 *  On error, -1 is return, and errno is set appropriately.
 */
int_putchar(char c)
{
    return(write(1, &c, 1));
}    
