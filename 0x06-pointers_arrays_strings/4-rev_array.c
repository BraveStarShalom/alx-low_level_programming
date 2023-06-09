#include "main.h"
/**
  * reverse_array - reverses the content of an array
  * of integers
  * @a: array
  * @n: number of elements of the array
  * Return: void.
  */
void reverse_array(int *a, int n)
{
	int p;
	int q;

	for (p = 0; p < n--; p++)
	{
		q = a[p];
		a[p] = a[n];
		a[n] = q;
	}
}
