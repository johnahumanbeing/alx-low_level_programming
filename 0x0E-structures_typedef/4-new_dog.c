#include "dog.h"

/**
 * _strlen-calculates the length of a string
 * @str: the string
 *
 * Return: returns the size of the string
 */

int _strlen(char *str)
{
	int i, len;

	len = 0;
	for (i = 0; str[i]; i++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy- copies one string to another string
 * @dest: where we are coping the string to
 * @src: the source of the string
 *
 * Return: returns a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog- creates a new dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int name_len;
	int owner_len;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	name_len = _strlen(name) + 1;
	ptr->name = malloc(sizeof(char) * name_len);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	owner_len = _strlen(owner) + 1;
	ptr->owner = malloc(sizeof(char) * owner_len);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->age = age;
	ptr->name = _strcpy(ptr->name, name);
	ptr->owner = _strcpy(ptr->owner, owner);

	return (ptr);
}
