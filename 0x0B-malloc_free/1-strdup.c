#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - duplicates string at newly
 * allocated location in memory
 * 
 * @str: string to be duplicated
 * Return: pointer to duplicated string,
 * NULL on failure or if str is NULL
 */
char *_strdup(char *str)
{
    int i;

    if (str != NULL)
    {
        char *new;

        new = malloc((strlen(str) * sizeof(char)) + sizeof(char));

        i = 0;

        while (str[i])
        {
            new[i] = str[i];

            i++;
        }

        if (new != NULL)
            return (new);
        else
            return (NULL);
    }
    else
        return (NULL);
}