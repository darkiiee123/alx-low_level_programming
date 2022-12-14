#include "lists.h"

/**
 * print_list - prints all the members of a list
 * @h: the start of the list
 *
 * Return: the number of members in the list
 */
size_t print_list(const list_t *h)
{
	size_t q = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			q++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			q++;
		}

		h = h->next;
	}
	return (q);
}
