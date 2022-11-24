#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list_t list
 * @head: pointer to list
 * @str: string to add
 *
 * Return: address of new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nod;
	list_t *temp = *head;

	nod = malloc(sizeof(list_t));
	if (nod == NULL)
		return (NULL);

	nod->str = strdup(str);
	nod->len = strlen(str);
	nod->next = NULL;

	if (temp == NULL)
	{
		*head = nod;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = nod;
	}
	return (*head);
}
