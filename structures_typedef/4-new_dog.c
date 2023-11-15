#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *newdog;
	int length1, length2, i, j;

	length1 = 0, length2 = 0;
	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
		return (NULL);
	while (name[length1++])
		;
	while (owner[length2++])
		;
		newdog->name = malloc(sizeof(newdog->name) * length1);

	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < length1; i++)
		newdog->name[i] = name[i];

	newdog->age = age;


	newdog->owner = malloc(sizeof(newdog->owner) * length2);

	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (j = 0; j < length2; j++)
		newdog->owner[j] = owner[j];

	return (newdog);
}
