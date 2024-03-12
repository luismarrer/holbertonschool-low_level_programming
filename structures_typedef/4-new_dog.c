#include "dog.h"


/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}

/**
 * _strlen - function that returns
 * the length of a string.
 *
 * @s: pointer
 *
 * Return: output is total char.
 */

int _strlen(char *s)

{

	int i = 0;

	while (s[i] != '\0')

	{
		++i;
	}

	return (i);

}

/**
 * new_dog - Creates a new dog.
 *
 * @name: Name of the dog.
 *
 * @age: Age of the dog.
 *
 * @owner: Owner of the dog.
 *
 * Return: Cosas.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	doggy->name = _strdup(name);

	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->age = age;

	doggy->owner = _strdup(owner);

	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	return (doggy);
}

