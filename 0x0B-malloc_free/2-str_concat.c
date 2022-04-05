#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *  @s1: string to concatenate to
 *  @s2: string to concatenate
 *  Return:  pointer to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1;
	int len2;
	int i;
	int j = 0;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	for (len1 = 0; *(s1 + len1) != '\0'; len1++)
		;
	for (len2 = 0; *(s2 + len2) != '\0'; len2++)
		;
	ptr = (char *)malloc(sizeof(char) * (len1 + len2));
	for (i = 0; i < (len1 + len2); i++)
		if (i < len1)
			*(ptr + i)  = *(s1 + i);
		else
		{
			*(ptr + i)  = *(s2 + j);
			j += 1;
		}
	i++;
	*(ptr + i) = '\0';
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
