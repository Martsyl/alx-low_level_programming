#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _stringlen - check the code
 * @s: pointer
 * Return: Always 0.
 */
int _stringlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _stringcopy - check the code
 * @dest: pointer
 * @src: string
 * Return: Always pointer dest.
 */
char *_stringcopy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - check the code
 * @name: pointer
 * @age: age
 * @owner: owner
 * Return: pointer to the dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int d1;
	int d2;

	d1 = _stringlen(name);
	d2 = _stringlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (d1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (d2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_stringcopy(dog->name, name);
	_stringcopy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

