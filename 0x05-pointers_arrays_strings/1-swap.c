#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: pointer to integer variable a
 * @b: pointer to integer variable b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
