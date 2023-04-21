#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print alphabets except q and e'
  *Return: always 0 is good
  */
int main(void)
{
	int p = 97;

	for (p = 97; p <= 122; p++)
	{
		if (p == 101 || p == 113)
		{
			continue;
		}
		putchar(p);
	}
	putchar('\n');
	return (0);
}
