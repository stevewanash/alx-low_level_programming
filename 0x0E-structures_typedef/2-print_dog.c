#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints details of the dog
 * @d: variable of type struct dog
 * 
 * No return
 */
void print_dog(struct dog *d)
{
    printf("Name: %s\nAge: %.06f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
