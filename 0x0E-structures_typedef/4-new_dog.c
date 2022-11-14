#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to a new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len, i;
	dog_t *doggie;

	doggie = (dog_t *)malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);
	name_len = owner_len = 0;
	while (name[name_len++])
		;
	while (owner[owner_len++])
		;
	doggie->name = malloc(name_len * sizeof(doggie->name));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		doggie->name[i] = name[i];
	doggie->age = age;
	doggie->owner = malloc(owner_len * sizeof(doggie->owner));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
		doggie->owner[i] = owner[i];
	return (doggie);
}
