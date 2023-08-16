#include "dog.h"
#include <stdlib.h>

/**
 * length_of - get the length of the string
 * @str: string to be calculated it length
 * Return: return the length of the string
*/

int length_of(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _memcpy - copy a string into another string
 * @dest: destination of the string to be copied in
 * @src: the source of the string
*/

void _memcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

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
	char *cp_name; /* hold a copy of the name */
	char *cp_owner; /* hold a copy of the owner */

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	cp_name = malloc((length_of(name) + 1) * sizeof(char));

	if (cp_name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	_memcpy(cp_name, name);

	cp_owner = malloc((length_of(owner) + 1) * sizeof(char));

	if (cp_owner == NULL)
	{
		free(cp_name);
		free(my_dog);
		return (NULL);
	}

	_memcpy(cp_owner, owner);

	my_dog->name = cp_name;
	my_dog->age = age;
	my_dog->owner = cp_owner;
	return (my_dog);
}

