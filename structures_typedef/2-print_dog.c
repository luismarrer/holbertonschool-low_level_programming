#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d:
 *
 */

void print_dog(struct dog *d)

{

	if (d == NULL)
	{

	}

	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
		{
			printf("Name: %s\n", d->name);
		}
			printf("Age: %.1f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
