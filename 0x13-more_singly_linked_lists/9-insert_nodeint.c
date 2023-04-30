#include "lists.h"

/**
* insert_nodeint_at_index - appends a new node in a linked list,
* at a given position
* @head: pointer to the first node in the list
* @inx: index where the new node is added
* @d: data to insert in the new node
*
* Return: pointer to the new node, else return NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int inx, int d)
{
unsigned int i;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);

new->n = d;
new->next = NULL;

if (inx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (i = 0; temp && i < inx; i++)
{
if (i == inx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}

return (NULL);
}
