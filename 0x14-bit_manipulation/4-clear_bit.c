#include"main.h"
/**
 * clear_bit - the function clear a bit
 * @n: the bit to be clear
 * @index: the index to be clear at
 * Return: the result
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return(1);
}
