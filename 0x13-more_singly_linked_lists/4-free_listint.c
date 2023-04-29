#include "lists.h"

/**
* free_listint - frees a linked list
* @head: An address to the head of listint_t list to be released.
*/
void free_listint(listint_t *head)
{
listint_t *temp;

/* While there are nodes left in the list */
while (head)
{

/*Store the address of the next node */
temp = head->next;

/* Free the current node */
free(head);

/* Update head to point to the next node */

head = temp;
}
}
