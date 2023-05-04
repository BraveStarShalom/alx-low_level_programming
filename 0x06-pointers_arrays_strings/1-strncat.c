#include "main.h"

/**
  * _strncat - concatenates two strings
  * @src: source
  * @dest: destination
  * @n: bytes used from source
  * Return: Pointer to dest.
  */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int q;

	p = 0;

	while (des[p] != '\0')
	{
		p++;
	}

	q = 0;
	while (q < n && src[q] != '\0')
	{
		dest[p] = src[q];
		p++;
		q++;
	}
	dest[p] = '\0';

	return (dest);
}
