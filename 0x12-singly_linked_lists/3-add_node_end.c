#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - adds a node to the end of list
 * @head: stores the address of the node being pointed
 * to by head
 * @str: is the string being copied to the str element
 * 
 * Return: address of new element on success
 * NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new = malloc(sizeof(list_t));

    list_t *nav;

    new -> next = NULL;

    new -> str = strdup(str);

    new -> len = strlen(str);
    
    if (*head != NULL)
    {
        nav = *head;

        while (nav->next != NULL)
        {
            nav = nav -> next;
        }
        nav->next = new;

        return (nav -> next);
    }
    else if (*head == NULL)
    {
        *head = new;

        return (*head);
    }
    else
        return (NULL);
}