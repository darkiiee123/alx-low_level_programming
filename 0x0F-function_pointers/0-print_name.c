#include "function_pointers.h"
#include "stdio.h"

/**
  *print_name - prints a name
  * @name: pointer to the name
  *@f: pointer to the function
  *
  */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
