#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to the array s.
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}
