#include "dog.h"

/**
 * init_dog - a function that initializes dog type
 * @d: pointer to structure
 * @name: pointer to the dog name
 * @age: age of dog
 * @owner: pointer to dog owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
