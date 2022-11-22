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
    if (s1 != NULL)
    {
        char *new;

        new = malloc(((strlen(s1) + strlen(s2))* sizeof(char)) + sizeof(char));

        int i = 0;

        int j = 0;

        while (s1[i] != NULL)
        {
            new[i] = s1[i];

            i++;
        }

        while (s2[j] != NULL)
        {
            new[i] = s2[j];

            i++;

            j++;
        }        

        if (new != NULL)
            return (new);
        else
            return (NULL);
    }
    else
        return (NULL);
}