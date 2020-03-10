#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);
/**
 *new_dog - creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: dog owner
 *
 *Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;

	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
		return (NULL);
	doge->name = _strdup(name);
	if (doge->name == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->age = age;
	doge->owner = _strdup(owner);
	if (doge->owner == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	return (doge);
}

/**
 *_strdup - returns a pointer to the copy of the string used as parameter
 *@str: string to be copied
 *
 *Return: a pointer to the newly allocated memory space of a string's copy
 */
char *_strdup(char *str)
{
	char *s;
	int i, length;

	length = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		length++;
	}
	s = malloc(sizeof(char) * (length + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
