#include <stdio.h>

/**
 * int_index - searches for integer in an array
 * @array: the array where the integer is searched
 * @size: the size of the array
 * @cmp: pointer to the function to compare two
 * elements
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;

    int result;

    while (i < size)
    {
        result = cmp(array[i]);

        if (result != 0)
        {
            return (i);
        }
        else
        {
            i++;

            continue;
        }
    }
    return (-1);
}