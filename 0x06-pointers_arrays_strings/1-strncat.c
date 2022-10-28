#include "main.h"
#include <string.h>

/**
  *_strncat - concatenates two strings
  * @dest: first string
  * @src: second string
  * @n: an integer
  * Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *val = strncat(dest, src, n);

	return (val);
}
