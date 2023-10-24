#include "lists.h"

/**
 * add_nodeint - to add node at the start of list
 * @head: pointer to the head address
 * @n: data value of list
 * Return: adress of node, else NULL
*/

listint_t *add_node_int(listint_t **head, const int n)
{
        listint_t *node;

        if (*head == NULL)
                return (NULL);

        node = malloc(sizeof(listint_t));
        if (node == NULL)
        {
                free(node);
                return (NULL);
        }

        node->n = n;
        node->next = *head;
        *head = node;

        return (node);
}
