#include"main.h"
#include<stdlib.h>
/**
 * array_range - The functions name
 * @min : inputs
 * @max: inputs
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int inter;

	if (min > max)
		return (NULL);
	inter = max - min + 1;

	p = malloc(sizeof(int) * inter);
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}
	return (p);
}
