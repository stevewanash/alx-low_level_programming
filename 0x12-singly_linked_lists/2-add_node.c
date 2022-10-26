#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    
    new = malloc(sizeof(list_t));

    new -> next = *head;

    new -> str = strdup(str);

    new -> len = strlen(str);

    *head = new;
}