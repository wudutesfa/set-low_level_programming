#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head
 * @str: string to be added
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new, *temp;
    unsigned int len = 0;

    while (str[len])
        len++;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->str = strdup(str);
    new->len = len;
    new->next = NULL;

    if (*head == NULL)
    {
        *head = new;
        return (new);
    }

    temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new;
    return (new);
}
