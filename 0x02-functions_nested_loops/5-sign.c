#include "main.h"

/**
 * print_sign - prints approriate sign to indicat if int is positive
 * , 0 or negative
 * @n: number to check
 * Return: 1 if n > 0,, 0 if n is 0 and -1 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
