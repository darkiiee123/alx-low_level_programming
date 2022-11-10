#include "main.h"
/**
  * malloc_checked - checks that the correct value is allocated
  * @b: the size to be allocated
  *
  * Return:a pointer to the allocated memory or 98
  */
void *malloc_checked(unsigned int b)
{
	int *f;

	f = malloc(b);

	if (f == NULL)
	{
		exit(98);
	}

	return (f);
}

