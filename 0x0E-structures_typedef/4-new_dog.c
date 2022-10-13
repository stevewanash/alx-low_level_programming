#include <stdio.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog variable
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * 
 * Return: pointer of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t new;

    dog_t *n = &new;

    *(n->name) = *name;

    n->age = age;

    *(n->owner) = *owner;
    if (n)
        return (n);
    else
        return (NULL);
}