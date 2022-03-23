#include "main.h"

/**
 * print_rev -  function that prints a string,
 * in reverse, followed by a new line.
 * @s: pointer to the array s.
 * Return: int
 */
void print_rev(char *s)
{
	int i = 0;
	int len = 0;
	int j;

	while (*(s + i) != '\0')
	{
		len += 1;
		i++;
	}
	for (j = len - 1; j >= 0; j--)
		_putchar(*(s + j));
	_putchar('\n');
}
