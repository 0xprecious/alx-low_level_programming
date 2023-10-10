#include <stdlib.h>
#include "dog.h"
/**
  *new_dog - create new record for dog
  *@name: name of dog
  *@age: age
  *@owner: owner of dog
  *Return: NULL (fail)
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, slenName, slenOwner;

	struct dog *n_dog = NULL;

	slenName = 0;
	while (name[slenName] != '\0')
		slenName++;
	slenOwner = 0;
	while (owner[slenOwner] != '\0')
		slenOwner++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(slenName + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(slenOwner + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= lenN; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= slenOwner; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
