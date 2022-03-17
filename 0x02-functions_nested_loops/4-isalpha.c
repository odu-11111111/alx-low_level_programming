#include "main.h"

/**
 * _isalpha - checks if a character is uppercase or lowercase
 * Return: 1 if alphabetic, 0 if otherwise
 * @c: the number to check
 */
int _isalpha(int c)
{
	char a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		if (a == c)
			return (1);
	}
	for (a = 'A'; a <= 'Z'; ++a)
	{
		if (a == c)
			return (1);
	}
	return (0);
}
