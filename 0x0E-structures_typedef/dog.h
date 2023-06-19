#ifndef DOG_H
#define DOG_H

#include<stdlib.h>
#include<stdio.h>
/**
 * struct dog - the struct name
 * @name: first member
 * @age: second member
 * @owner: Third member
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
