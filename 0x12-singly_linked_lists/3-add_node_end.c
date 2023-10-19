#include "lists.h"

/**
 * add_node_end - function to add nod to the end of a list
 * @head: pointer to address of node
 * @str: string to be duplicated
 * Return: new address, else null
*/

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *node;

    if (str == NULL)
        return (NULL);

    node = malloc(sizeof(list_t));
    if (node == NULL)
    {
        free(node);
        return (NULL);
    }

    node->str = strdup(str);
    if (node->str == NULL)
    {
        free(node);
        return (NULL);
    }

    node->len = strlen(str);
    node->next = NULL;
    *head = &node;

    return (*head);
}
