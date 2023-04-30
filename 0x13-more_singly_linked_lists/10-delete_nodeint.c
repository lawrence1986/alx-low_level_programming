#include "lists.h"
/**
* delete_nodeint_at_index - A function that deletes the node at a given
*                           index (inx) of a linked list
* @head : pointer to the head of the list
* @inx: index of the node to be deleted
*         (indices starting at 0)
* Return: 1 - if function succeeds,
*        -1 - if function fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int inx)
{
listint_t *tmp, *copy = *head;
unsigned int node;

if (copy == NULL)
return (-1);

if (inx == 0)
{
*head = (*head)->next;
free(copy);
return (1);
}

for (node = 0; node < (inx - 1); node++)
{
if (copy->next == NULL)
return (-1);

copy = copy->next;
}

tmp = copy->next;
copy->next = tmp->next;
free(tmp);
return (1);
}
