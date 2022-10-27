#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of list
 * @head: pointer to address of the first node
 * @n: data to be input
 * 
 * Return: on success, address of new element
 * NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = malloc(sizeof(listint_t));

    (new) -> n = n;

    (new) -> next = *head;

    *head = new;

    return (*head);
}