#include <stdio.h>

/**
 * dog - gives attributes of dogs
 * @name: gives the name of the dog
 * @age: gives age of the dog
 * @owner: gives the name of the dog owner
 * 
 */
struct dog
{
	char *name;

	float age;

	char *owner;
};
typedef struct dog dog_t;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}