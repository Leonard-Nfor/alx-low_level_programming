#include "dog.h"
#include <stdlib.h>
#include<stdio.h>
/**
 * free_dog -The function that frees dog from the allocated memory
 * @d: a pointer that point to the memory created
 * Return: return nothing
 */
void free_dog(dog_t *d)
{
	if (d ==NULL)
		return;
	if (d != NULL)
		free(d);
}
