#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - iterates an array
  * @array: pointer to the array
  * @size_t:
  * @size: size of the array
  * @action: ointer to the function
  *
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{

			action(array[i]);
		}
	}
}
