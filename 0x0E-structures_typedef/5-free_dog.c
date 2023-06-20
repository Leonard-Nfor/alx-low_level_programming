#include<stdlib.h>
#include"dog.h"
/**
 * free_dog - Function name
 * @d: dog to be freed
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
