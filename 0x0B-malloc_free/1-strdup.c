#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 *  @str: string to copy
 *  Return: NULL if str = NULL, pointer to the duplicated string
 *  on success, NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int len;

	if (str == NULL)
		return (NULL);
	for (len = 0; *(str + len) != '\n'; len++)
		;
	ptr = (char *)malloc((sizeof(char) * len) + 1);
	for (i = 0; i < len; i++)
		*(ptr + i) = *(str + i);
	*(ptr + i + 1) = '\0';
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
