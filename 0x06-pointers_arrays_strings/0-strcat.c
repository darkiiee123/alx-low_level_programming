#include "main.h"
#include <string.h>

/**
  *_strcat -  concatenates two strings
  * @dest: the first string
  * @src: the second string
  * Return: a pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	char *val = strcat(dest, src);

	return (val);
}
