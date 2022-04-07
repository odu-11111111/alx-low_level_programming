#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: count of command line arguments
 * @argv: pointer to array of pointer pointing to argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
