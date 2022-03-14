#include <stdio.h>

/**
 * main - function to putchar lowercase alphabets
 * Return: zero
 */
int main(void)
{
	int c;

	for (c = 30; c <= 37; ++c)
		putchar(c);
	for (c = 41; c <=46; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
