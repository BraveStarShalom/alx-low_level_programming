#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print numbers of base 16 in lowercase'
  *Return: always 0 is good
  */
int main(void)
{
	int p = 48;
	int e = 97;

	for (p = 48; p <= 57; p++)
	{
		putchar(p);
	}
	for (e = 97; e <= 102; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
