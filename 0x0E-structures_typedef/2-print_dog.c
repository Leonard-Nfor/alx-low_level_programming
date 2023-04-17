#include "dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_dog - print stuct dog
 * @d: a pointer
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";
	printf("Name : %s\n Age: %f\n Owner: %s\n", (*d).name, (*d).age, (*d).owner);
}