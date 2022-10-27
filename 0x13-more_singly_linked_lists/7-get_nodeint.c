#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index specified
 * @head: address of first node in the list
 * @index: position of respective nodes, starting from 0
 * 
 * Return: on success, node at index specified
 * on failure, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *nav;

    int i = 0;

    if (head != NULL)
    {
        nav = head;

        while (nav != NULL)
        {
            if (i == index)
                return (nav);

            nav = nav -> next;

            i++;
        }
        return (NULL);
    }
    else
        return (NULL);
}