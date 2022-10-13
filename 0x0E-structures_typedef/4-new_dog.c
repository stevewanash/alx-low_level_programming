#include <stdio.h>
#include "dog.h"

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