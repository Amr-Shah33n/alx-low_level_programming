#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memcpy - copies from src to dest
 * @dest: dest pointer
 * @src: number of bytes to fill
 * @n: number of charachters to copy
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(p++) = *(src++);
	}
	return (dest);
}

/**
 * _strlen - gets string length of pointer
 * @s: pointer to input string
 *
 * Return: returns string length
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Void, initializes values no return
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->age = age;
	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_memcpy(dog->name, name, _strlen(name) + 1);
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_memcpy(dog->owner, owner, _strlen(owner) + 1);
	return (dog);
}
