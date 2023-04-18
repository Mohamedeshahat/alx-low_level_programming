#include"dog.h"

/**
 * init_dog - initializes a dog
 * @d: dog init
 * @name: dog's name
 * @age: dog'age
 * @owner: owner's name
 *
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