#include "main.h"

/**
  * factorial - calculates the factorial of a number
  * @n: the given number
  *
  * Return: -1 to indicate an erro
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
