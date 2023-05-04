#include "main.h"

/**
  * _strncpy - copies a string
  * @src: source
  * @dest: destination
  * @n: bytes from source
  * Return: Pointer to dest.
  */
char *_strncpy(char *dest, char *src, int n)
{
	int p = 0;

	while (p < n && src[p] != '\0')
		p++
		dest[p] = src[p];

	for (; p < n; p++)
		dest[p] = '\0';

	return (dest);
}
