#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - gives sum of data in all the nodes
 * @head: address of first node
 * 
 * Return: on success, value of sum
 * on failure, 0
 */
int sum_listint(listint_t *head)
{
    listint_t *nav;

    int sum = 0;

    if (head != NULL)
    {
        nav = head;
        
        while (nav != NULL)
        {
            sum += nav -> n;

            nav = nav -> next;
        }
        return (sum);
    }
    return (0);
}