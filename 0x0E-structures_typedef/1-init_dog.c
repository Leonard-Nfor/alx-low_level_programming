#include"dog.h"
#include<stdlib.h>
/**
 * init_dog - The function name
 * @name : input
 * @owner : input
 * @age : input
 * @owner : input
 * @d : input
 * Return : Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
