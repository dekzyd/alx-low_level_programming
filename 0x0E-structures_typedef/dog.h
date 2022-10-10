#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structs
 * @name: dog name
 * @age: dog age
 * @owner: name of owner
 *
 * Description: struct for type of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
