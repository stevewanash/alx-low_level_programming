#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index specified
 * @head: pointer to address of first node
 * @index: the position at which the node should be deleted,
 * starts from zero
 * 
 * Return: on success, 1
 * on failure, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *nav;

    listint_t *tmp;

    listint_t * var;

    int i = 0;

    int m = 0;

    int n = 0;

    if (*head != NULL)
    {
        nav = *head;

        tmp = *head;

        var = *head;

        while (nav != NULL)
        {
            if (i == index)
            {
                if (i != 0)
                {
                    while (m != i - 1)
                    {
                        tmp = tmp -> next;

                        m++;
                    }
                    while (n != i + 1)
                    {
                        var = var -> next;

                        n++;
                    }
                    nav -> next = NULL;

                    tmp -> next = var;

                    free (nav);

                    return (1);
                }
                else
                {
                    *head = (*head) -> next;

                    nav -> next = NULL;

                    free (nav);

                    return (1);
                }
            }
            nav = nav -> next;

            i++;
        }
        return (-1);
    }
    else
        return (-1);
}