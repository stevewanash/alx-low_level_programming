#include <stdio.h>

/**
 * array_iterator - calls function for each element
 * of an array
 * @array: the array on which the function is called
 * @size: size of the array
 * @action: the function being called
 * 
 * No Return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i = 0;

    while (i < size)
    {
        (*action)(array[i]);

        i++;
    }
}