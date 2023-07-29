#include"main.h"
/**
 * print_binary - prints decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}

