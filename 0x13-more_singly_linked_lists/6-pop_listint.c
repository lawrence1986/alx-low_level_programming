#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_int
* @head: pointer to the first element in the linked list
*
* Return: This returns the head node input (n),
* or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int First_Node;

	/*if list is empty return 0*/
	if (!head || !*head)
		return (0);

/*get element of first node*/
	First_Node = (*head)->n;

	/*set head address to temp*/
	temp = (*head)->next;

	/*free first node*/
	free(*head);
	*head = temp;

/*return element of first node*/
	return (First_Node);
}

