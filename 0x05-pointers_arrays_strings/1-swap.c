#include "main.h"

/**
  * swap_int - swaps the value of two integers
  * @a: integer to be swap
  * @b: integer to swap
  */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
