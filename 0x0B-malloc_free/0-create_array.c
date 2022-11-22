#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - makes array of characters
 * initializes it with a certain character
 * 
 * @size: number of elements in the array
 * @c: the character to initialize the array with
 * Return: pointer to array on success,
 * NULL on failure or if size is NULL
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;

    if (size)
    {
        char *new;

        new = malloc(size * sizeof(char));

        i = 0;

        while (i < size)
        {
            new[i] = c;

            i++;
        }

        if (new != NULL)
            return (new);
        else
        {
            free(new);

            return (NULL);
        }
    }
    else
        return (NULL);
}