#include "main.h"

int the_pal(char *s, int p, int l);
int _strlen_recursion(char *s);

/**
  * is_palindrome - checks if a string is a palindrome
  * @s: string
  * Return: 1 if it is a palindrome, 0 if it is not.
  */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (the_pal(s, 0, _strlen_recursion(s)));
}

/**
  * _strlen_recursion - returns the length of a string
  * @s: string for length calculation
  * Return: length of the string.
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  * the_pal - recursive check for palindrome
  * @s: string to check
  * @p: iterator
  * @l: length of the string
  * Return: 1 if it is a palindrome, 0 if it is not.
  */

int the_pal(char *s, int p, int l)
{
	if (*(s + p) != *(s + l - 1))
		return (0);
	if (p >= l)
		return (1);
	return (the_pal(s, p + 1, l - 1));
}
