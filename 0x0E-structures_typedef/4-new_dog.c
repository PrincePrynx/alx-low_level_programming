#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: *woof
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a, b, c;
	dog_t *woof;


	if (name == NULL || owner == NULL)
		return (NULL);
	woof = malloc(sizeof(dog_t));
	if (woof == NULL)
		return (NULL);
	for (a = 0; name[a]; a++)
		;
	a++;
	woof->name = malloc(sizeof(char) * a);
	if (woof->name == NULL)
	{
		free(woof);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		woof->name[c] = *(name + c);
	(*woof).age = age;
	for (b = 0; owner[b]; b++)
		;
	b++;
	woof->owner = malloc(a * sizeof(char));
	if (woof->owner == NULL)
	{
		free(woof->name);
		free(woof);
		return (NULL);
	}
	for (c = 0; c < b; c++)
		woof->owner[c] = owner[c];
	return (woof);
}
