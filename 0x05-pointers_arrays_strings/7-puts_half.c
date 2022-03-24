#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str: pointer to the array str.
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int len;
	int j;
	int n;

	while (*(str + i) != '\0')
		i += 1;
	len = i;
	n = len / 2;
	if ((len % 2) != 0)
	{
		n += 1;
		for (j = 0; j < len; j++)
		{
			if (j >= n)
				_putchar(*(str + j));
		}
	}
	else
	{
		for (j = 0; j < len; j++)
		{
			if (j >= n)
				_putchar(*(str + j));
		}
	}
	_putchar('\n');
}
