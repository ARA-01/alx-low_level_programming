#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - prints the length of a string.
 * @s: string
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int d;

	d = 0;

	while (s[d] != '0')
	{
		d++;
	}
	return (d);
}

/**
 * _strcpy - function that copies the string pointed to by source
 * including the terminating null byte (\0), to the buffer pointed
 * to by the destination.
 * @src: source variable; string to be copied.
 * @dest: destination variable; pointer to the buffer in
 * which we copy the string.
 * Return: pointer to destination.
 */

char *_strcpy(char *dest, char *src)
{
	int len, d;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (d = 0; d < len; d++)
	{
		dest[d] = src[d];
	}
	dest[d] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: the owner.
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
