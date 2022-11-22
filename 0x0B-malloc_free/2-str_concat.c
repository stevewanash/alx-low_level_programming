#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates one string onto
 * another at new location in memory
 * 
 * @s1: string to be concatenated on
 * @s2: string to be copied onto the first string
 * Return: pointer to new location in memory containing
 * s1 and s2
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    int i;

    int j;

    if (s1 != NULL)
    {
        char *new;

        new = malloc(((strlen(s1) + strlen(s2))* sizeof(char)) + sizeof(char));

        i = 0;

        j = 0;

        while (s1[i])
        {
            new[i] = s1[i];

            i++;
        }

        while (s2[j])
        {
            new[i] = s2[j];

            i++;

            j++;
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