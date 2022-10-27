#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of list
 * @head: pointer to address of the first node
 * @n: data to be input
 * 
 * Return: on success, address of new element
 * NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new = malloc(sizeof(listint_t));

    listint_t *nav = NULL; //= malloc(sizeof(listint_t *));

    int i = 0;

    //listint_t *store = NULL;

    new -> n = n;

    new -> next = NULL;

    //store = *head;

    if (*head != NULL)
    {
        nav = *head;
        while (nav -> next != NULL)
        {
            nav = nav -> next;

            i++;
        }
        nav -> next = new;
    }
    else
        *head = new;
        

    if (nav != NULL)
        return (nav -> next);
    else if (nav == NULL)
        return (*head);
    else
        return (NULL);
}