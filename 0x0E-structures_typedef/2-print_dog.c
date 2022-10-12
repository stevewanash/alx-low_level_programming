#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
    printf("Name: %s\nAge: %.06f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
