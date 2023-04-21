#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print lowercase alphabet in reverse'
  *Return: always 0 is good
  */
int main(void)
{
	int p = 122;

	for (p = 122; p >= 97; p--)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
