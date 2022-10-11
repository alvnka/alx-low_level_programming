#include "dog.h"
/**
 * init_dog - function to initialize struct dog
 * @d: - element 1
 * @name: element 2
 * @age: element 3
 * @owner:element 4
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
