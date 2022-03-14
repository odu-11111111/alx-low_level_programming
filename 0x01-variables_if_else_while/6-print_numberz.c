#include <stdio.h>

/**
 * main - function to putchar lowercase alphabets
 * Return: zero
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
