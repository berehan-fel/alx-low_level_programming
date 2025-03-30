#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - copies a string by creating a new memory.
 * @s: the string to copy.
 *
 * Return: a pointer to the new memory the contains the string copy.
 */

char *_strdup(char *s)
{
	char *str;
	int i = 0, j;

	while (s[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));

	if (str == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		str[j] = s[j];
	return (str);
}
/**
 * new_dog - creates a new dog.
 * @name: name of the dog to create.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: a pointer to data type dog_t(the newly created dog).
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = _strdup(name);
	dog->age = age;
	dog->owner = _strdup(owner);

	return (dog);
}
