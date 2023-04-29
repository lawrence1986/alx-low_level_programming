#include "lists.h"

/**
* listint_len - This returns the number of elements in a linked listint_t lists
* @h: The head of the listint_t list
*
* Return: number of figure
*/
size_t listint_len(const listint_t *h)
{
size_t figure = 0;

while (h)
{
figure++;
h = h->next;
}

return (figure);
}
