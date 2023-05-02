#include "main.h"

/**
  * rev_string - function that reverses a string
  * @s: string
  * Return: Reversed string.
  */
void rev_string(char *s);
{
	char rev = s[0];
	int opp = 0;
	int p;

	while (s[opp] != '\0')
	opp++;

	for (p = 0; p < opp; p++)
	{
		opp--;
		rev = s[p];
		s[p] = s[opp];
		s[opp] = rev;
	}
}
