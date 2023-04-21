#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Print alphabets lowercase'
  *Return: always 0 successful
  */
int main(void)
{
	int n = 97;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
