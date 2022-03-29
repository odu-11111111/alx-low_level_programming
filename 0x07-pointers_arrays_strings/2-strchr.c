#include "main.h"

/**
 ** _strchr - function that locates a character in a string.
 ** @s: string to check for character
 ** @c: char to locate in string s
 ** Return:  pointer to the first occurrence of the character
 ** c in the string s, or NULL if the character is not found
 **/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\n'; i++)
	{
		if (*(s + i) == c)
			return ((s + i));
	}
	return ('\0');
}
