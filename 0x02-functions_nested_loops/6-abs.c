#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: number to check
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
