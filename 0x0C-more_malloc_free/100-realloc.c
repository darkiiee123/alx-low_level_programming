#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: pointer previously allocated with malloc
 * @old_size: the previous poniter size
 * @new_size: new allocated size
 *
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *cptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}
	cptr = malloc(new_size);
	if (cptr == NULL)
		return (NULL);

	for (i = 0; i < new_size && i < old_size; i++)
		memcpy(cptr, ptr, i);

	free(ptr);

	return (cptr);
}
