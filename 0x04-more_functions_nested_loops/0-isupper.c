#include "main.h"

/**
 *_isupper - function that checks for uppercase character.
 *@c: char variable to check
 *Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
