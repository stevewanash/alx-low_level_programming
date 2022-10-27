#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees all the node in entire list
 * @head: address of first node
 * 
 * Return: no return
 */
void free_listint(listint_t *head)
{
    listint_t *nav;

    while (head != NULL)
    {
        nav = head;

        head = head->next;

        free(nav);
    }
}