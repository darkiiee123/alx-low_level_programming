#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array:array of int to index
 * @size:size of elements in the array
 * @cmp: function to compare values
 *
 * Return: an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z, i;

	if (size <= 0)
		return (-1);

	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			z = cmp(array[i]);

			if (z != 0)
				return (i);
		}
	}

	return (-1);
}
