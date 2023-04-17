#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - return to stdout the length of a string
 * @s: string to evalate
 * Return the length of a string
 */
int _strlen(char *s)
{
	int r;
	
	r = 0;
	while (s[r] != '\0')
	{
		r++;
	}
	return (r);
}
/**
 * strcpy - copy the string pointed to by the source string src
 * including the terminating Null bytes '\0'
 * to the buffer pointed to by dest
 * @dest: pointer to where we copy string
 * @src : the string to be copy
 */
char *_strcpy(char *dest, char *src)
{
	int lent, i;

	lent = 0;
	while (src[lent] != '\0')
		lent++;
	for (i =0; i < lent; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog -create a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the dog
 * return a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lent1, lent2;

	lent1 = strlen(name);
	lent2 = strlen(owner);
	dog = malloc(sizeof(dog_t);
	if (dog == NULL)
		return (NULL);
	(*dog).name = malloc(sizeof(char) * (lent1 + 1));
	if ((*dog).owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * (lent + 1));
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		return (NULL);
	}
	_strcpy(dog->name,mame);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
