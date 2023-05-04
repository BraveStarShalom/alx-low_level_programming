#include "main.h"

/**
  * leet - encodes a string into 1337
  * @s: input string
  * Return: Pointer to dest.
  */
char *leet(char *s)
{
	int p = 0;
	int q;
	int ll[] = {98, 101, 111, 116, 108};
	int upl[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + p) != '\0')
	{
		for (q = 0; q < 5; q++)
		{
			if (*(s + p) == ll[q] || *(s + p) == upl[q])
			{
				*(s + p) = num[q];
				break;
			}
		}
	p++
	}
	return (s);
}
