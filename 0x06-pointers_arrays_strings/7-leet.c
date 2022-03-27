#include "main.h"

/**
 * leet - function that capitalizes all words of a string.
 * @str: string to encode to 1337
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	int lower[5] = {97, 101, 111, 116, 108};
	int upper[5] = {65, 69, 79, 84, 76};
	int enc[5] = {52, 51, 48, 55, 49};

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
			if (str[i] == lower[j] || str[i] == upper[j])
				str[i] = enc[j];
	}
	return (str);
}
