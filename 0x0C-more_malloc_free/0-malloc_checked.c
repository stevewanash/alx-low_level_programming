#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - frees memory at pointed location
 * @b: size of memory allocated
 *
 * Return: pointer to memory location
 * On error, exits and calls 98
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);

	if (a != NULL)
		return (a);

	else
		exit(98);

}
