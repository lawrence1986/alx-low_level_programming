#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - add new node begining of list_t
* @head: pointer to structure
* @str: string
* Return: the address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_Node;
unsigned int len = 0;

new_Node = malloc(sizeof(list_t));
if (new_Node == NULL)
{
free(new_Node);
return (NULL);
}

new_Node->str = strdup(str);

while (str[len] != '\0')
{
len++;
}
new_Node->len = len;

if (*head != NULL)
new_Node->next = *head;

if (*head == NULL)
new_Node->next = NULL;

*head = new_Node;

return (*head);
}
