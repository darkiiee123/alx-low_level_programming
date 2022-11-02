#include "main.h"
#include <string.h>

/**
  *_puts_recursion - prints out a string
  *@s: pointer to the character
  */
void _puts_recursion(char *s)
{
	int c;

	c = strlen(s);

	if (c == 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[0]);
	_puts_recursion(&s[1]);
}
