#include "main.h"

/**
 * _strdup - duplicates an array of characters
 * @str: the array to be duplicated
 *
 * Return: a pointer to the array or null
 */
char *_strdup(char *str)
{
	char *st;

	if (str == NULL)
		return (NULL);

	st = malloc((sizeof(char) * strlen(str)) + 1);
	if (st == NULL)
		return (NULL);

	strcpy(st, str);

	return (st);
}
