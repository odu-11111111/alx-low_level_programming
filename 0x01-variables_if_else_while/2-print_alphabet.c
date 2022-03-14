#include <stdio.h>

/**
 * main - function to putchar lowercase alphabets
 * Return: zero
 */
int main(void) 
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar(10);
	return (0);
}
