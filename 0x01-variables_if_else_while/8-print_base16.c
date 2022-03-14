#include <stdio.h>

/**
 * main - function to putchar lowercase alphabets
 * Return: zero
 */
int main(void)
{
	char c;

	for (c = 48; c <= 55; ++c)
		putchar(c);
	for (c = 61; c <=66; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
