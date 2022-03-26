#include "main.h"

/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase.
 * @str: string to convert to all uppercase
 * Return: uppercased string
 */
char *string_toupper(char *str)
{
	int i, j, k;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		k = 65;
		for (j = 97; j <= 122; j++)
		{
			if (*(str + i) == j)
				*(str + i) = k;
			k++;
		}

	}
	return (str);
}
