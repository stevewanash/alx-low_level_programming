#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of the list
 * @h: is a pointer to the first node
 * 
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
    int i = 0;

    while (h != NULL)
    {
        printf("%d\n", h -> n);

        h = h -> next;

        i++;
    }
    return (i);
}