#include "lists.h"

/**
 * pop_listint - to delete head node of a list
 * @head: pointer to the list address
 * Return: data of deleted head
*/

int pop_listint(listint_t **head)
{
        listint_t *node;
        int data = 0;

        if (*head == NULL)
                return (0);

        node = *head;
        data = node->n;
        free(*head);
        *head = node->next;

        return (data);
}
