#include "main.h"
#include <stdio.h>

/**
 * rev_string -  function that reverses a string
 * @s: pointer to the array s.
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int len;
	char *t;
	char temp;
	int j = 0;

	while (*(s + i) != '\0')
		i += 1;
	len = i - 1;
	t = s;
	while (j < len)
	{
		temp = *(t + len);
		*(t + len) = *(s + j);
		*(s + j) = temp;
		j++;
		len--;
	}
}
