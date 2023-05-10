#include "main.h"

int the_root(int n, int p);
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number
  * Return: Square root of the number.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (the_root(n, 0));
}

/**
  * the_root - recurse to find natural square of a number
  * @n: number
  * @p: iterator
  * Return: The result.
  */
int the_root(int n, int p)
{
	if (p * p > n)
		return (-1);
	if (p * p == n)
		return (p);
	return (the_root(n, p + 1));
}
