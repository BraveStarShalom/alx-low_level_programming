#include "main.h"

int the_prime(int n, int p);
/**
  * is_prime_number - identifier of a prime number
  * @n: number to be assessed
  * Return: 1 for prime number, 0 for non prime.
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (the_prime(n, n - 1));
}

/**
  * the_prime - checks recursive nature of a prime number
  * @n: number
  * @p: iterator
  * Return: 1 for prime number, 0 for non prime.
  */
int the_prime(int n, int p)
{
	if (p == 1)
		return (1);
	if (n % p == 0 && p > 0)
		return (0);
	return (the_prime(n, p - 1));
}
