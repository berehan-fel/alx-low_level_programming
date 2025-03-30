#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 * @d: a pointer to struct dog.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);

	if (d->age != 0)
		printf("Age: %f\n", d->age);
	else
		 printf("Age: %s\n", "(nil)");

	printf("Owner: %s\n", d->owner);
}
