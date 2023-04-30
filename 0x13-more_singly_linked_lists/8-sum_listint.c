#include "lists.h"

/**
* sum_listint - a function that returns the sum of all the data (n)
*              of a listint_t linked list.
*
* @head: first node in the linked list
*
* Return: resulting sum of all (n)
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

/*While parameter*/
while (temp)
{
sum += temp->n;
temp = temp->next;
}

/*if list is empty it will return sum = 0*/
return (sum);
}
