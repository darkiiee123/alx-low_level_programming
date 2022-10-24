#include "main.h"

/**
  * swap_int - swaps 2 integers
  * @a: the first number
  * @b: the second number
  * Return: returns nothing
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
