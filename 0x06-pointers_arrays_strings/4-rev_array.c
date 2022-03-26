#include "main.h"

/**
 * reverse_array - function that reverses the
 * content of an array of integers.
 * @a: array to reverse
 * @n: lenght of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1] = j;
		n--;
	}
}
