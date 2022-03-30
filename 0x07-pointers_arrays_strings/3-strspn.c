#include "main.h"

/**
 ** _strspn - function that gets the length of a prefix substring.
 ** @s: string to check for character
 ** @accept: string to check char from
 ** Return:  Returns the number of bytes in the initial
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n, byt = 0;

	for (n = 0; *(accept + n) != '\0'; n++)
		;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				byt += 1;
				j = n;
			}
		}
		if (byt == i)
			return (byt);
	}
	return (byt);
}
