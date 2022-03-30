#include "main.h"

/**
 ** _strstr - function that locates a substring
 ** @haystack: string to check for substring
 ** @needle: substring to check from haystack
 ** Return: pointer to the beginning of the located substring, or NULL
 **/

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, l, p;

	for (p = 0; *(needle + p) != '\0'; p++)
		;
	for (i = 0; *(needle + i) != '\0'; i++)
	{
		for (j = 0; *(haystack + j) != '\0'; j++)
		{
			k = i;
			l = j;
			while (*(needle + k) == *(haystack + l) && *(needle + k) != '\0')
			{
				k += 1;
				l += 1;
			}
			if (k == p)
				return ((haystack + j));
		}
	}
	return ('\0');
}
