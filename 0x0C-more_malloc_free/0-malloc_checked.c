#include<stdlib.h>
#include "main.h"
/**
 * malloc_check - allocate memory and holds the address
 * @b: the input
 * Return: return a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);
	return (ptr);
}




