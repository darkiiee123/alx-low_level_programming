#include "main.h"

/**
  *_pow_recursion - calculates the power of two integers recursively
  * @x: the first int
  * @y: the second int
  *
  * Return: y is lower than 0, the function should return -1
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
