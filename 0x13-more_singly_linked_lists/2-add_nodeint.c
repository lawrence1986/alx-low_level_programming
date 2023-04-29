#include "lists.h"

/**
* add_nodeint -    Adds new node at the begin of a linked list
* @head:           Pointer to the address of the listint_t list
* @n:              Data to insert in that new node
*
* Return:          Address of the new node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
