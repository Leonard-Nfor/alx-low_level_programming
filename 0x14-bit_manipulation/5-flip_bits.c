#include"main.h"
/**
 * flip_bits - function that flips bits
 * @n: input
 * @m: input
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int cur_value;
	unsigned long int exclu = n ^ m;
	
	for (i = 63; i >= 0; i--)
	{
		cur_value = exclu >> i;
		if (cur_value & 1)
			count++;
	}
	return (count);
}

