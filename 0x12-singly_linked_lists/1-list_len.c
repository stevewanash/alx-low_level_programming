#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: pointer to the first node in the list
 * 
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
    int i = 0;

    while (h != NULL)
    {
        i++;
        
        h = h->next;
    }
    return (i);
}