#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at the 
 * index specified
 * @head: a pointer to the address of the first node
 * @idx: the index at which the node should be inserted
 * @n: data to be added to the node
 * 
 * Return: on success, address of new node
 * on failure, NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new = malloc(sizeof(listint_t));

    listint_t *nav;

    listint_t *tmp;

    int i = 0;

    int m = 0;

    new -> n = n;

    if (*head != NULL)
    {
        nav = *head;

        tmp = *head;

        while (nav != NULL)
        {
            if (i == idx)
            {        
                while (m < i - 1)
                {
                    tmp = tmp -> next;

                    m++;
                }

                tmp -> next = new;

                new -> next = nav;

                return (tmp -> next);
            }

            nav = nav -> next;

            i++;
        }
        return (NULL);
    }
    else
        return (NULL);
}