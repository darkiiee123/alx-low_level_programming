#include "main.h"
#include <string.h>

/**
  * _strspn - gets the length of a prefix substring
  * @s: pointer to the initial segment
  * @accept: the no of bytes
  * Return:  the number of bytes in the initial segment of s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = strspn(s, accept);

	return (c);
}
