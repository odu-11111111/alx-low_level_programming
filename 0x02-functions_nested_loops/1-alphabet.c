#include "main.h"

/**
 ** print_alphabet - Check description
 ** Description: it prints the alphabet in a lower case followed by a new line
 ** Return: Nothing.
 **/
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
