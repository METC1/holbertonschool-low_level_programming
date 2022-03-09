#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes struct dog
 * @name: char name of dog
 * @age: float age of dog
 * @owner: char owner of dog
 * @d: pointer type struct dog
 * Description: inicialize a pointer dog variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
