#include "lists.h"

/**
 * free_listint2 - Assigns head to NULL and frees list
 * @head:first element to the pointer
 * Return: NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *L_ptr;

	if (head == NULL)
	return;

	while (*head)
	{
		L_ptr = *head;
		*head = (*head)->next;
		free(L_ptr);
	}
	head = NULL;
}
