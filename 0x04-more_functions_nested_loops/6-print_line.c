#include "main.h"

/**
  * print_line - prints a straight line on the terminal
  * @n: the no of '_' to be printed
  */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}
	_putchar('\n');
}
