#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: the address of the current head
 * @n: the value to be added to the node
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list, *temp;

	temp = *head;
	list = malloc(sizeof(listint_t));

	if (!list)
		return (NULL);

	list->n = n;
	list->next = NULL;

	if (!(*head))
	{
		*head = list;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = list;
	}

	return (*head);
}
