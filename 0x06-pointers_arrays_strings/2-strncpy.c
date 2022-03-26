#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: char string to copy to
 * @src: char string to be copied
 * @n: number of bytes of src to use
 * Return: pointer to resulting string `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
