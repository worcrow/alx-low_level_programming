#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a struct dog and initialize it
 * @name: pointer string to the name of the dog
 * @age: float variable indicating the age of the dog
 * @owner: pointer string to the owner of the dog
 * Return: pointer to the struct, or null if it failed
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog != NULL)
	{
		my_dog->name = name;
		my_dog->age = age;
		my_dog->owner = owner;
	}
	return (my_dog);
}

