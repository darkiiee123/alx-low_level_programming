#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list_t list
 * @head: pointer to list
 * @n: integer to add
 *
 * Return: address of new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp;

	*head = new;

	return (*head);
}
