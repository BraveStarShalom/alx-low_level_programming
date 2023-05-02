#include "main.h"

/**
  * print_rev - prints a string, in reverse
  * @s: string
  * Return: Always 0.
  */
void print_rev(char *s)
{
	int r = 0;
	int p;

	while (*s != '\0')
	{
		r++;
		s++;
	}
	s--;
	for (p = r; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
