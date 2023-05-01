#include "lists.h"

/**
* reverse_listint - A linked list reversal
* @head: pointer to the first node in the list
*
* Return: First node in the new list pointer
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
listint_t *current = *head;

for (; current; current = next)
{
next = current->next;
current->next = prev;
prev = current;
}

*head = prev;

return (*head);
}
