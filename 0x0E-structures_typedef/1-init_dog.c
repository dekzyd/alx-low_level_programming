#include "dog.h"

/**
 * init_dog - function to initalize structure
 * @d: pointer to structure
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	};
}
