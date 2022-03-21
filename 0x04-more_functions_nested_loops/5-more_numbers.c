#include "main.h"

/**
 *more_numbers - function that prints 10 times the numbers
 *from 0 to 14, followed by a new line.
 *Return: void
 */
void more_numbers(void)
{
	int l;

	for (l = 0; l < 10; l++)
	{
		int i;
		int j = 48;
		int k = 48;

		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				j = 49;
			_putchar(j);
			if (i > 9)
			{
				_putchar(k);
				k++;
			}
			j++;
		}
		_putchar('\n');
	}
}
