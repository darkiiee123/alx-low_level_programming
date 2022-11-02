#include "main.h"
#include <string.h>
/**
 * is_palindrome - palindrome or nah?
 * @s: pointer to a string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	return (_palindrome(s, 0));
}

/**
 * _palindrome - palindrome or nah?
 * @s: pointer to a string
 * @n: iterator 0
 *
 * Return: 0 or 1
 */
int _palindrome(char *s, int n)
{
	int let = strlen(s);

	if (n == let)
	{
		return (1);
	}
	else if (s[n] != s[let - 1 - n])
	{
		return (0);
	}
	else
	{
		return (_palindrome(s, n + 1));
	}
}
