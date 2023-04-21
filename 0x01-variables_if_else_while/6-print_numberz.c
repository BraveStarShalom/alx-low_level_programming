#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print number of base 10'
  *Return: always 0 means success
  */
int main(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		putchar(p + 48);
	}
	putchar('\n');
	return (0);
}
