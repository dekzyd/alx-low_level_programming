#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog object from existing struct.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	unsigned int nl, ol, i;

	nl = strlen(name);
	ol = strlen(owner);
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->name = malloc(sizeof(char) * nl);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
	{
		ptr->name[i] = name[i];
	}
	ptr->age = age;
	ptr->owner = malloc(sizeof(char) * ol);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
	{
		ptr->owner[i] = owner[i];
	}

	return (ptr);
}
