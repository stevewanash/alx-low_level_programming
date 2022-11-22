#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - initializes all elements of a 
 * 2 dimensional array to zero
 * 
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to the array on success,
 * NULL on failure or if width or height is 0
 */
int **alloc_grid(int width, int height)
{
    int i;

    int j;
    
    if (width)
    {
        char **new;

        new = malloc(width * height * sizeof(char));

        i = 0;

        j = 0;

        while (i < height)
        {
            while (j < width)
            {
                new[i][j] = '0';

                j++;
            }
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