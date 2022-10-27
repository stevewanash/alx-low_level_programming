#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: is a pointer to the first node
 * 
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
    int i = 0;

    while (h != NULL)
    {
        h = h -> next;

        i++;
    }
    return (i);
}