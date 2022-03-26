#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: char to compare
 * @s2: char to compare
 * Return: int result of comparism
 */
int _strcmp(char *s1, char *s2)
{
	int i, x, sum1 = 0, sum2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		x = s1[i];
		sum1 += x;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		x = s2[i];
		sum2 += x;
	}
	if (sum1 < sum2)
		return (-1);
	else if (sum1 == sum2)
		return (0);
	else
		return (1);
}
