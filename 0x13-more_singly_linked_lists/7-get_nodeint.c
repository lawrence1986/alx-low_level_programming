#include "lists.h"

/**
* get_nodeint_at_index - get node at *index nth from a linked list
*
* @head: pointer to the first node of the list
* @index: index of node to access
*
* Return: node address OR NULL if otherwise
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	/*iterate the nodes in list till the index node*/
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	/*return head*/
	return (head);
}
