#include"function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * int_index - The functions name
 * @array: Array
 * @size: size in byte
 * @cmp: the function pointer
 * Return: An index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
