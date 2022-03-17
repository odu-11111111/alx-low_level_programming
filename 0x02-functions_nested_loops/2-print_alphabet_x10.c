#include "main.h"

/**
 ** print_alphabet - Check description
 ** Description: it prints the alphabet in a lower case followed by a new line
 ** Return: Nothing.
 **/
void print_alphabet_x10(void)
{
	int recur = 0;
	char alpha;

	while (recur < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		++recur;
	}
}
