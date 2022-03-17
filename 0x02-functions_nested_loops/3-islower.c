#include "main.h"

/**
 * _islower - checks if a character is uppercase or lowercase
 * Return: 1 if lowercase, 0 if otherwise
 * @c: the number to check
 */
int _islower(int c)
{
	char a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		if (a == c)
			return (1);
	}
	return (0);
}
