#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of a list
 * @h: pointer to the first node in the list
 * 
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
    int i = 0;

    while (h != NULL)
    {
        if (h->str != NULL)
            printf("[%lu] %s\n", h->len, h->str);

        else
            printf("[0] (nil)\n");

        i++;
        
        h = h->next;
    }
    return (i);
}