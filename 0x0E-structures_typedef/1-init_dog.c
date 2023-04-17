#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - will initialize a variable of type struct dog
 * @d: is pointer that point to the memory address of struct dog
 * @name: first initialize
 * @age: second to initialize
 * @owner: third to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
