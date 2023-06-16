#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked - check the code
 * @b: The bytes needed
 * Return: A pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);
	return (ptr);
}
