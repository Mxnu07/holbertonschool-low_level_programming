#include "dog.h"
/**
 *
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *newdog;
	int lenght1, lenght2, i, j;

	lenght1 = 0, lenght2 = 0;
	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
		return (NULL);
	while (name[lenght1++]
		;
	while (owner[lenght2++]
		;
		newDog->name = malloc(sizeof(newDog->name) * length1);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	for (i = 0; i < length1; i++)
		newDog->name[i] = name[i];

	newDog->age = age;


	newDog->owner = malloc(sizeof(newDog->owner) * length2);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (j = 0; j < length2; j++)
		newDog->owner[j] = owner[j];

	return (newDog);
}

