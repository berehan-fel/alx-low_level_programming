/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer to data type struct dog.
 * @name: name with which to initialize a variable of struct dog.
 * @age: an age of the dog.
 * @owner: owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
