#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional array
 * 
 * @grid: address of the pointer to the grid
 * @height: number of rows
 * No return
 */
void free_grid(int **grid, int height)
{
    int i;

    i = 0;

    while (i < height)
    {
        free(*grid[i]);

        i++;
    }
}