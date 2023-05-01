#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* looped_listint_len - The number Counts of unique nodes
* in a looped listint_t list.
* @head: The head of the listint_t to check (Pointer).
*
* Return: If the list is not looped to Zero (0).
* Else - the number of unique nodes in the list.
*/
size_t looped_listint_len(const listint_t *head)
{
/*Declare and initialize pointers for the tortoise and hare */
const listint_t *tortoise, *hare;
/*Declare and initialize the count of nodes to 1 */
size_t nodes = 1;
/*This Checks if the linked list is empty or has only one node */
if (head == NULL || head->next == NULL)
return (0);

tortoise = head->next;
hare = (head->next)->next;

while (hare)
{
if (tortoise == hare)
{
tortoise = head;
for (; tortoise != hare; nodes++)
{
tortoise = tortoise->next;
hare = hare->next;
}

tortoise = tortoise->next;
for (; tortoise != hare; nodes++)
{
tortoise = tortoise->next;
}

return (nodes);
}

tortoise = tortoise->next;
hare = (hare->next)->next;
}
/*Return 0 if there is no loop in the linked list */
return (0);
}

/**
* print_listint_safe - Prints a safe listint_t list.
* @head: The pointer to the head of the listint_t list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
/*Declare and initialize variables for the count of nodes and index */
size_t nodes, index = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++, head = head->next)
{
printf("[%p] %d\n", (void *)head, head->n);
}
}
else
{
for (index = 0; index < nodes; index++, head = head->next)
{
printf("[%p] %d\n", (void *)head, head->n);
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}
