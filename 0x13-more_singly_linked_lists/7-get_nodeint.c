#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: the list
 * @index: the index of the node to return
 *
 * Return: node if found and NULL if not
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cpr = 0;
	listint_t *save;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (temp)
	{
		if (cpr == index)
		{
			save = temp;
			return (save);
		}
		temp = temp->next;
		cpr++;
	}
	return (NULL);
}
