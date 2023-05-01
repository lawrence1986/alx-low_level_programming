#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: The head of the list to print
 *
 * Return: number of figure in list_t list.
 */
size_t print_listint(const listint_t *h)
{
i size_t figure = 0;

 while (h)
 {
 printf("%d\n", h->n);
 figure++;
 h = h->next;
 }

 return (figure);
}

