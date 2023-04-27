#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  *
  * Description: prints the numbers 1 to 100, but
  * for multiples of 3, print Fizz,
  * for multiples of 5, print Buzz, and
  * multiples of both 3 and 5, print FizzBuzz
  *
  * Return: Always 0 success
  */

int main(void)
{
	int p;

	for (p = 1; p <= 100; p++)
	{
		if (p % 3 == 0)
			printf("Fizz");
		else if (p % 5 == 0)
			printf("Buzz");
		else if (p % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", p);
		if (p < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
