#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - program that generates random valid passwords
  * Return: Always 0.
  */
int main(void)
{
	int password[70];
	int p, res, q;

	res = 0;

	srand(time(NULL));

	for (p = 0; p < 70; p++)
	{
		password[p] = rand() % 80;
		res += (password[p] + '0');
		putchar(password[p] + '0');
		if ((3000 - res) - '0' < 80)
		{
			q = 3000 - res - '0';
			res += q;
			putchar(q + '0');
			break;
		}
	}
	return (0);
}
