#include "main.h"
#include <string.h>

/**
  * _memcpy - copies n bytes from memory area src to 
  *memory area dest
  * @dest: the first memory area
  * @src: the second memory area
  * @n: the number of bytes
  * Return: a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = memcpy(dest, src, n);

	return (s);
}
