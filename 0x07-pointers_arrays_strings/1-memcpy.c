#include "main.h"

/**
 ** _memcpy - function copies n bytes from memory
 ** area src to memory area dest
 ** @dest: memory area to copy to
 ** @src: memory area to copy from
 ** @n: size of bytes
 ** Return: pointer to char
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i += 1;
	}
	return (dest);
}
