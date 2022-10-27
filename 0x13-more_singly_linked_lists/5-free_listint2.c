#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees all the nodes in a list
 * @head: a pointer to the address of the first node
 * 
 * Return: no return
 */
void free_listint2(listint_t **head)
{
    listint_t *nav;

    while (*head != NULL)
    {
        nav = *head;

        *head = (*head)->next;

        free(nav);
    }
}