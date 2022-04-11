#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x, y, z;
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (x = 0; name[x]; x++)
		;
	for (y = 0; owner[y]; y++)
		;
	p->name = malloc(x + 1);
	p->owner = malloc(y + 1);

	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name), free(p->owner), free(p);
		return (NULL);
	}
	for (z = 0; z = x; z++)
	{
		p->name[z] = name[z];
	}
	p->name[z] = '\0';
	for (z = 0; z < y; z++)
	{
		p->owner[z] = owner[z];
	}
	p->owner[z] = '\0';
	p->age = age;
	return (p);
}
