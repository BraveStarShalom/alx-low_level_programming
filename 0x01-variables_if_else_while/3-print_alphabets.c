#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print alphabets lowercase and uppercase'
  *Return: always 0 is success
  */
int main(void)
{
	int p = 97;
	int e = 65;

	for (p = 97; p <= 122; p++)
	{
		putchar(p);
	}
	for (e = 65; e <= 90; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
