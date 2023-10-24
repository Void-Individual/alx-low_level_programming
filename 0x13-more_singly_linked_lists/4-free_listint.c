#include "lists.h"

/**
 * free_listint - function to free list
 * @head: pointer to list head address
 * Return: empty
*/

void free_listint(listint_t *head)
{
        listint_t *temp = head;

        while (head != NULL)
        {
                free(head);
                head = temp->next;
                temp = head;
        }
}
