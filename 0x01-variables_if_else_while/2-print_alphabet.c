#include <stdio.h>

/**
 * main - function to putchar lowercase alphabets
 * Return: zero
 */
int main() {
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar("\n");
	return 0;
}