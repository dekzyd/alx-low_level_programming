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
	struct dog *ptr;

	ptr = d;
	(*ptr).name = name;
	(*ptr).age = age;
	ptr->owner = owner;
}
