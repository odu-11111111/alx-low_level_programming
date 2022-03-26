#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: string to capitalize
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i, j, k, l;
	int sep[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; *(str + i) != '\0'; i++)
	{
		k = 65;
		for (j = 97; j <= 122; j++)
		{
			if (i == 0)
			{
				if (str[i] == j)
					str[i] = k;
			}
			else
			{
				for (l = 0; l < 13; l++)
				{
					if (str[i - 1] == sep[l] && str[i] == j)
						str[i] = k;
				}
			}
			k++;
		}
	}
	return (str);
}
