#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point for my code
  *Description: 'print whether a number is positive or negative'
  *Return: always 0 is successful
  */
int main(void)
{
	int p;

	srand(time(0));
	p = rand() - RAND_MAX / 2;

	if (p > 0)
	{
		printf("%d is positive\n", p);
	}
	else if (p == 0)
	{
		printf("%d is zero\n", p);
	}
	else
	{
		printf("%d is negative\n", p);
	}
	return (0);
}
