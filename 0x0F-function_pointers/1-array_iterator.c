#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that execute a function as argument
 * @array: an array
 * @size: the number of elements to be printed
 * @action: a pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	if (array == NULL || action == NULL)
		return;
	while(i < size)
	{
		i++;
	action(array[i]);
	}
}
