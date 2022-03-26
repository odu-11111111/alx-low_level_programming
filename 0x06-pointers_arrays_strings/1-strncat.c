#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: char string to concatenate to
 * @src: char string
 * @n: number of bytes of src to use
 * Return: pointer to resulting string `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; j < n && *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	for (k = 0; *(src + k) != '\0'; k++)
		;
	if (k < n)
		dest[i] = '\0';
	return (dest);
}
