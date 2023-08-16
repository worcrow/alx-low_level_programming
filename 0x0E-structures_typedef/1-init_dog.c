/**
 * init_dog - initialize a variable of type dog
 * @d: pointer to the dog struct
 * @name: name to be filled
 * @age: age to be filled
 * @owner: owner name to be filled
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
