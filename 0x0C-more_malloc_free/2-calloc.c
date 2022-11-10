#include "main.h"

/**
   * _calloc - allocating memory for an array
   * @nmemb: number of element
   * @size: size of each element
   *
   * Return: at successful exit
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);

	if (c == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		c[a] = 0;

	return (c);
}
