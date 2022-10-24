#include <string.h>
#include "main.h"

/**
  * print_rev - prints a string in reverse
  * @s : pointer to the string
  */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
