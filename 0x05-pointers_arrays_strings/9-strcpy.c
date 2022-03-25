#include "main.h"
#include <stdio.h>

/**
 * _strcpy -  function that copies the string pointed to by src,
 *including the terminating null byte (\0), to the buffer
 *pointed to by dest.
 *@dest: pointer to dest
 *@src: pointer to src
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	*dest = *src;
	while (*(src + i) != '\n')
		i += 1;
	i += 1;
	for (j = 0; j <= i; j++)
		*(dest + j) = *(src + j);
	return (dest);
}
