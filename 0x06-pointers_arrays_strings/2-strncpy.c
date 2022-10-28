#include "main.h"
#include <string.h>

/**
  *_strncpy - copies a string.
  * @dest: first string
  * @src: second string
  * @n: the number of bytes
  * Return: a pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *val = strncpy(dest, src, n);

	return (val);
}
