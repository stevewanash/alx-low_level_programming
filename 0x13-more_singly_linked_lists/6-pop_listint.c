#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delets the first node of the list
 * @head - pointer to the address of first node
 * 
 * Return: data inside deleted node
 */
int pop_listint(listint_t **head)
{
    listint_t *nav;

    if (*head != NULL)
    {
        nav = *head;

        *head = (*head) -> next;

        nav -> next = NULL;

        return (nav -> n);
    }
    else
        return (0);
}
