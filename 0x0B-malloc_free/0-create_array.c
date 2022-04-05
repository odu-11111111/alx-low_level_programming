#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 *  and initializes it with a specific char.
 *  @size: size of the array
 *  @c: char to initialize to
 *  Return: NULL if size = 0, a pointer to the array,
 *  or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
