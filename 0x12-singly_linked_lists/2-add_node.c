#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node - adds a node to the list
 * @head: stores the address of the node being pointed
 * to by head
 * @str: is the string being copied to the str element
 * 
 * Return: address of new element on success
 * NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *new;

    new = malloc(sizeof(list_t));

    new -> str = strdup(str);

    new -> len = strlen(str);
    
    if (*head != NULL)
    {
        new -> next = *head;

        *head = new;

        return (*head);
    }
    else if (*head == NULL)
    {
        new -> next = NULL;

        *head = new;

        return (*head);
    }
    else
        return (NULL);
}