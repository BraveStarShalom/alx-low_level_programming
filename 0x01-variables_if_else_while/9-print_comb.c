#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print combo of numbers'
  *Return: always 0 is good
  */
int main(void)
{
	int p;

	for (p = 48; p <= 57; p++)
	{
		putchar(p);
		if (p == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
