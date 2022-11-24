#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list_t list
  * @head: pointer to list
  * @str: string to add
  *
  * Return: address of new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nod;
	list_t *temp = *head;

	nod = malloc(sizeof(list_t));
	if (nod == NULL)
		return (NULL);

	nod->str = strdup(str);
	nod->len = strlen(str);
	nod->next = temp;

	*head = nod;

	return (nod);
}
