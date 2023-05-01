#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h:The head of the list to print
 *
 * Return: number of figure in list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t figure;

	for (figure = 0; h != NULL; figure++)
	{
	printf("%d\n", h->n);
	h = h->next;
	}

	return (figure);
}
