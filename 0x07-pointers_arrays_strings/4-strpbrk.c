#include "main.h"

/**
 ** _strpbrk - function that searches a string for any of a set of bytes.
 ** @s: string to check for character
 ** @accept: string to check char from
 ** Return:  pointer to the byte in s or NULL
 **/

char *_strpbrk(char *s, char *accept)
{
	int i, j, n;

	for (n = 0; *(accept + n) != '\0'; n++)
		;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return ((s + i));
			}
		}
	}
	return ('\0');
}
